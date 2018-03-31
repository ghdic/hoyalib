#include "Turboc.h"

class Date;

class Time

{

	friend void OutToday(Date &, Time &);

private:

	int hour, min, sec;

public:

	Time(int h, int m, int s) { hour = h; min = m; sec = s; }

};



class Date

{

	friend void OutToday(Date &, Time &);

private:

	int year, month, day;

public:

	Date(int y, int m, int d) { year = y; month = m; day = d; }

};



void OutToday(Date &d, Time &t)

{

	printf("������ %d�� %d�� %d���̸� ���� �ð��� %d:%d:%d�Դϴ�.\n",

		d.year, d.month, d.day, t.hour, t.min, t.sec);

}



void main()

{

	Date D(2005, 01, 02);

	Time T(12, 34, 56);

	OutToday(D, T);

}