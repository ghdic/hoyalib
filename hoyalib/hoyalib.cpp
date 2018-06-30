/*
This library reference by standard library

*/
#include <string>
using namespace std;

//자연수인 두 string을 비교한다
//should include string
//음수인경우 x
int compNumStr(string a, string b) {
	if (a.size() > b.size())return -1;
	else if (a.size() < b.size())return 1;
	else {
		for (int i = a.size() - 1; i >= 0; i--) {
			if (a[i] > b[i])return -1;
			else if (a[i] < b[i])return 1;
		}
		return 0;
	}
}

//자연수인 두 string의 합을 반환한다.
//should include string
//음수인경우 x
string sumNumStr(string a, string b) {
	string tmp;
	char add;
	bool raised = false;
	int aSize = a.size(), bSize = b.size();
	int size = aSize > bSize ? aSize : bSize;
	for (int i = 1; i <= size; i++) {

		if (i > aSize)
			add = b[bSize - i];
		else if (i > bSize)
			add = a[aSize - i];
		else
			add = a[aSize - i] + b[bSize - i] - '0';

		if (raised == true)add += 1;
		if (add - '0' >= 10) {
			raised = true;
			add = add - 10;
			tmp = add + tmp;
		}
		else {
			raised = false;
			tmp = add + tmp;
		}

	}
	if (raised == true)tmp = '1' + tmp;
	return tmp;
}