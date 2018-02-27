/*
This library reference by standard library

*/

#include <stdio.h>
#include <conio.h>

//need include conio.h
//키보드 눌렸을때 눌린 문자 반환; 아닐경우 0반환(if문조건문에 넣어서 활용)
// if(choice=get_kbhit()){}
char get_kbhit() {
	if (_kbhit)
		return _getch();
	return 0;
}
