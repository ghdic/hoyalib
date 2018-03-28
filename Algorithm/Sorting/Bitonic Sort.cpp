////////////////////////////////
//	Bitonic Sort
//	바이토닉 정렬
////////////////////////////////
/*
#include <iostream>
using namespace std;

void compAndSwap(int arr[], int i, int j, int dir) {
	if (dir == (arr[i] > arr[j]))
		swap(arr[i], arr[j]);
}

void bitonicMerge(int arr[], int low, int cnt, int dir) {
	if (cnt > 1) {
		int k = cnt / 2;
		for (int i = low; i < low + k; i++)
			compAndSwap(arr, i, i + k, dir);
		bitonicMerge(arr, low, k, dir);
		bitonicMerge(arr, low + k, k, dir);
	}
}

void bitonicSort(int arr[], int low, int cnt, int dir) {
	if (cnt > 1) {
		int k = cnt / 2;

		bitonicSort(arr, low, k, 1);

		bitonicSort(arr, low + k, k, 0);

		bitonicMerge(arr, low, cnt, dir);
	}
}


int main()
{
	int arr[] = { 3, 7, 4, 8, 6, 2, 1, 5 };
	int N = sizeof(arr) / sizeof(arr[0]);

	bitonicSort(arr, 0, N, 1);

	cout<<"Sorted array : ";
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}
*/