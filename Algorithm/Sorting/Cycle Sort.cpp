////////////////////////////////
//	Cycle Sort
//	����Ŭ ����
////////////////////////////////
/*
#include <iostream>
using namespace std;

void cycleSort(int arr[], int n) {


	for (int cycle_start = 0; cycle_start <= n - 2; cycle_start++) {
		int item = arr[cycle_start];

		int pos = cycle_start;
		for (int i = cycle_start + 1; i < n; i++)
			if (arr[i] < item)
				pos++;

		if (pos == cycle_start)
			continue;

		while (item == arr[pos])
			pos += 1;

		if (pos != cycle_start) {
			swap(item, arr[pos]);
		}

		while (pos != cycle_start) {
			pos = cycle_start;

			for (int i = cycle_start + 1; i < n; i++)
				if (arr[i] < item)
					pos += 1;

			while (item == arr[pos])
				pos += 1;

			if (item != arr[pos]) {
				swap(item, arr[pos]);
			}
		}

	}
}

int main()
{
	int arr[] = { 1, 8, 3, 9, 10, 10, 2, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cycleSort(arr, n);

	cout << "After sort : ";
	for (int i = 0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
*/