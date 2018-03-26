////////////////////////////////
//	Shell Sort
//	½© Á¤·Ä
////////////////////////////////

/*
#include <iostream>
using namespace std;

void shellSort(int arr[], int n) {
	for (int gap = n / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < n; i++) {
			int tmp = arr[i];
			int j;
			for (j = i; j >= gap && arr[j - gap] > tmp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = tmp;
		}
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 12, 34, 54, 2, 3,20,30,11,13,5,1,10,10,20,11,33,100 }, i;
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Array before sorting: \n";
	printArray(arr, n);

	shellSort(arr, n);

	cout << "\nArray after sorting: \n";
	printArray(arr, n);

	return 0;
}
*/