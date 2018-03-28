////////////////////////////////
//	Strand Sort
//	¹Ù´å°¡ Á¤·Ä
////////////////////////////////
/*
#include <iostream>
#include <list>
using namespace std;

void strandSort(list<int>&ip, list<int>&op) {
	if (ip.empty())
		return;

	list<int>sublist;
	sublist.push_back(ip.front());
	ip.pop_front();

	for (auto it = ip.begin(); it != ip.end();) {
		if (*it > sublist.back()) {
			sublist.push_back(*it);
			it = ip.erase(it);
		}
		else
			it++;
	}
	op.merge(sublist);
	strandSort(ip, op);
}

int main(void)
{
	list<int> ip{ 10, 5, 30, 40, 2, 4, 9 };


	list<int> op;


	strandSort(ip, op);
	cout << "Sorted Array : ";
	for (auto x : op)
		cout << x << " ";
	cout << endl;
	return 0;
}
*/