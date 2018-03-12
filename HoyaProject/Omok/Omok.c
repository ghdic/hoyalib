#include <Windows.h>

#define ID_TIMER 1
#define PLAYER 8
#define COMPUTER 9
#define ST_SIZE 30
int isWin = 0;
LRESULT   CALLBACK WndProc(HWND hwnd, UINT iMessage, WPARAM wParam, LPARAM lParam);
int CheckWin(int board[][15], int lrow, int lcol);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance
	, LPSTR lpszCmdParam, int nCmdShow)
{
	static TCHAR szAppName[] = TEXT("OMOK");

	HWND         hwnd;
	MSG            msg;
	WNDCLASS      wndclass;

	//1. class define
	wndclass.style = CS_HREDRAW | CS_VREDRAW;
	wndclass.lpfnWndProc = WndProc;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hInstance = hInstance;
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.lpszMenuName = NULL;
	wndclass.lpszClassName = szAppName;

	//2. class enrolled
	if (!RegisterClass(&wndclass))
	{
		MessageBox(NULL, TEXT("This program requires windows NT")
			, szAppName, MB_ICONERROR);
		return 0;
	}

	//3. window create
	hwnd = CreateWindow(szAppName, TEXT("오목 게임"),
		WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, CW_USEDEFAULT,
		850, 650,
		NULL, NULL, hInstance, NULL);

	//4. show window
	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);

	//5. process messages
	while (GetMessage(&msg, 0, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

/*----------- Window Procedure -------------*/
LRESULT   CALLBACK WndProc(HWND hwnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	//Double-buffering
	HBITMAP hBitmap, hOldBitmap;
	HDC hdc, hdcMem;

	//for Selecting Color
	HBRUSH hBrush, hOldBrush;

	static POINT mousePt;
	static int stone = PLAYER;

	static int board[15][15] = { 0, };         //Game board
	static int winStone;

	int x, y;
	int row, col;

	switch (iMessage)
	{
	case WM_CREATE:
		SetTimer(hwnd, ID_TIMER, 10, NULL);
		return 0;

	case WM_MOUSEMOVE:
		//Mouse pointer in client
		mousePt.x = LOWORD(lParam);
		mousePt.y = HIWORD(lParam);

		//in order to fit in a cell. (for array board)
		mousePt.x /= ST_SIZE;
		mousePt.y /= ST_SIZE;

		return 0;

	case WM_RBUTTONDOWN:
		//Initailize for new game;
		isWin = 0;
		stone = PLAYER;
		memset(board, 0, sizeof(board));

		return 0;

	case WM_LBUTTONDOWN:
		if (!isWin)
		{
			int posX = mousePt.x;
			int posY = mousePt.y;

			if (board[posY][posX] < PLAYER)   /* 게임플레이어가 놓이지 않은 공간 */
			{
				board[posY][posX] = stone;

				if (stone == COMPUTER)   stone = PLAYER;
				else                  stone = COMPUTER;

				winStone = CheckWin(board, 15, 15);

				if (winStone != 0)
				{
					char temp[20];
					wsprintf(temp, "%d 이겼다", winStone);

					MessageBox(hwnd, temp, "승리", MB_OK | MB_ICONINFORMATION);
					return NULL;
				}
			}
		}

		return 0;

	case WM_TIMER:
		hdc = GetDC(hwnd);                                    //Device Context
		hdcMem = CreateCompatibleDC(hdc);                     //Memory DC
		hBitmap = CreateCompatibleBitmap(hdc, ST_SIZE * 15, ST_SIZE * 15);   //Memory BITMAP

		hBrush = (HBRUSH)CreateSolidBrush(RGB(255, 255, 0));        //Yellow Brush (for Board)

		hOldBitmap = (HBITMAP)SelectObject(hdcMem, hBitmap);      //in Memory DC, hBitmap selected (필수)
		hOldBrush = (HBRUSH)SelectObject(hdcMem, hBrush);         //in Memory DC, Yellow Bursh selected.

		Rectangle(hdcMem, 0, 0, ST_SIZE * 15, ST_SIZE * 15);         //Draw Board

																	 //to seperate drawing board lines.
		for (x = 0; x < 16; x++)
		{
			MoveToEx(hdcMem, x*ST_SIZE + 20, 0, NULL);
			LineTo(hdcMem, x*ST_SIZE + 20, ST_SIZE * 15 + 20);
		}
		for (y = 0; y < 15; y++)
		{
			MoveToEx(hdcMem, 0, y*ST_SIZE + 20, NULL);
			LineTo(hdcMem, ST_SIZE * 15 + 20, y*ST_SIZE + 20);
		}
		DeleteObject(SelectObject(hdcMem, hOldBrush));

		//To draw stones in [board] array
		for (row = 0; row < 15; row++)
		{
			for (col = 0; col < 15; col++)
			{
				if (board[row][col] == PLAYER)
					hBrush = (HBRUSH)CreateSolidBrush(RGB(50, 50, 255));
				else
					if (board[row][col] == COMPUTER)
						hBrush = (HBRUSH)CreateSolidBrush(RGB(255, 55, 55));

				if (board[row][col] == PLAYER || board[row][col] == COMPUTER)
				{
					hOldBrush = (HBRUSH)SelectObject(hdcMem, hBrush);
					Ellipse(hdcMem, col*ST_SIZE, row*ST_SIZE
						, col*ST_SIZE + ST_SIZE, row*ST_SIZE + ST_SIZE);
					DeleteObject(SelectObject(hdcMem, hOldBrush));
				}
			}
		}

		//when Mouse pointer moves that reserve stone traced.
		if (!isWin && (board[mousePt.y][mousePt.x] != PLAYER
			&& board[mousePt.y][mousePt.x] != COMPUTER))
		{
			if (stone == PLAYER)
				hBrush = (HBRUSH)CreateSolidBrush(RGB(50, 50, 255));
			else if (stone == COMPUTER)
				hBrush = (HBRUSH)CreateSolidBrush(RGB(255, 55, 55));

			hOldBrush = (HBRUSH)SelectObject(hdcMem, hBrush);

			Ellipse(hdcMem, mousePt.x*ST_SIZE, mousePt.y*ST_SIZE
				, mousePt.x*ST_SIZE + ST_SIZE, mousePt.y*ST_SIZE + ST_SIZE);

			DeleteObject(SelectObject(hdcMem, hOldBrush));
		}

		//Fast copy what Memory DC to Device Context
		BitBlt(hdc, 0, 0, ST_SIZE * 15, ST_SIZE * 15, hdcMem, 0, 0, SRCCOPY);

		//Collection
		DeleteObject(SelectObject(hdcMem, hOldBitmap));

		//WriteArray values
		char temp[50];
		for (row = 0; row < 15; row++)
			for (col = 0; col < 15; col++)
			{
				wsprintf(temp, "%d", board[row][col]);
				TextOut(hdc, 650 + col * 10, 40 + row * 20, temp, 1);
			}

		ReleaseDC(hwnd, hdcMem);
		DeleteDC(hdcMem);
		ReleaseDC(hwnd, hdc);

		return 0;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}
	return DefWindowProc(hwnd, iMessage, wParam, lParam);
}

/*-------------- Check Win --------------------*/
int CheckWin(int board[][15], int lrow, int lcol)
{
	int row, col;
	int i;
	int count = 0;

	for (row = 0; row < lrow; row++)
	{
		for (col = 0; col < lcol; col++)
		{
			//If putting stone, then check.
			if (board[row][col] == PLAYER || board[row][col] == COMPUTER)
			{
				// check east →
				if (!isWin)
					for (i = 0; i < 5; i++)
						if (row + i < lrow && (board[row + i][col] == board[row][col]))
							count++;
						else
						{
							count = 0;
						}

				if (count == 5)
					isWin = 1;

				// check south-east↘
				if (!isWin)
					for (i = 0; i < 5; i++)
						if ((row + i < lrow && col + i < lcol) && (board[row + i][col + i] == board[row][col]))
							count++;
						else
						{
							count = 0;
						}

				if (count == 5)
					isWin = 1;

				// check south ↓
				if (!isWin)
					for (i = 0; i < 5; i++)
						if (col + i < lcol && (board[row][col + i] == board[row][col]))
							count++;
						else
						{
							count = 0;
						}

				if (count == 5)
					isWin = 1;

				// check south-west ↙
				if (!isWin)
					for (i = 0; i < 5; i++)
						if ((row - i > 0 && col + i < lcol) && (board[row - i][col + i] == board[row][col]))
							count++;
						else
						{
							count = 0;
						}

				if (count == 5)
					isWin = 1;
			}

			//If selected stone is won, then the result return.
			if (isWin)
				return board[row][col];
		}
	}

	//Not end
	return 0;
}