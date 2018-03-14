#include "Turboc.h"

class Position

{
private:

	int x;

	int y;

	char ch;

public:

	Position(int x) {
		x = 0;

		y = 0;

		ch = ' ';
	}

	void OutPosition() {
		if (ch != ' ') {
			gotoxy(x, y);

			_putch(ch);
		}
	}
};

void main()

{
	Position Here(1);

	Here.OutPosition();
}