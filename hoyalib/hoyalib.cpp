/*
This library reference by standard library

*/

#include <stdio.h>
#include <conio.h>
#include <Windows.h>
//need include conio.h
//키보드 눌렸을때 눌린 문자 반환; 아닐경우 0반환(if문조건문에 넣어서 활용)
// if(choice=get_kbhit()){}
char get_kbhit() {
	if (_kbhit)
		return _getch();
	return 0;
}

//need include Windows.h
//console cursor position change
void gotoxy(int x, int y)
{
	COORD pos = { x, y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//need include Windows.h
//return console location x
int wherex()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	return csbi.dwCursorPosition.X;
}

//need include Windows.h
//return console location y
int wherey()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	return csbi.dwCursorPosition.Y;
}