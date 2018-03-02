#include <windows.h>
#include <iostream>

void gotoxy(int x, int y)
{
	COORD pos = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int wherex()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	return csbi.dwCursorPosition.X;
}

int wherey()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	return csbi.dwCursorPosition.Y;
}

int main()
{
	gotoxy(30, 10);

	std::cout << "Hello, World!";

	int x = wherex();
	int y = wherey();

	gotoxy(0, 0);

	std::cout << "end pos of \"Hello, World!\" = ";
	std::cout << "(" << x << ", " << y << ")" << std::endl;

	std::cin.get();
}