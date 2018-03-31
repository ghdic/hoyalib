////////////////////////////////
//	Structure Sort
//	구조체 정렬
////////////////////////////////

/*
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct Student {
	string name;
	int math;
	int phy;
	int che;
	int total;
	int rank;
};

bool compareTwoStudents(Student a, Student b) {
	if (a.total != b.total)
		return a.total > b.total;

	if (a.math != b.math)
		return a.math > b.math;

	return (a.phy > b.phy);
}

void computeRanks(Student a[], int n) {
	for (int i = 0; i < n; i++)
		a[i].total = a[i].math + a[i].phy + a[i].che;

	sort(a, a + 5, compareTwoStudents);

	for (int i = 0; i < n; i++)
		a[i].rank = i + 1;
}

int main()
{
	int n = 5;

	Student *a = new Student[n];

	a[0].name = "Bryan";
	a[0].math = 80;
	a[0].phy = 95;
	a[0].che = 85;

	a[1].name = "Kevin";
	a[1].math = 95;
	a[1].phy = 85;
	a[1].che = 99;

	a[2].name = "Nick";
	a[2].math = 95;
	a[2].phy = 85;
	a[2].che = 80;

	a[3].name = "AJ";
	a[3].math = 80;
	a[3].phy = 70;
	a[3].che = 90;

	a[4].name = "Howie";
	a[4].math = 80;
	a[4].phy = 80;
	a[4].che = 80;

	computeRanks(a, n);

	cout << "Rank" << "\t" << "Name" << "\t";
	cout << "Maths" << "\t" << "Physics" << "\t"
		<< "Chemistry";
	cout << "\t" << "Total\n";

	for (int i = 0; i < n; i++)
	{
		cout << a[i].rank << "\t";
		cout << a[i].name << "\t";
		cout << a[i].math << "\t"
			<< a[i].phy << "\t"
			<< a[i].che << "\t\t";
		cout << a[i].total << "\t";
		cout << "\n";
	}

	delete[] a;
	return 0;
}
*/