////////////////////////////////
//	Pancake Sort
//	팬케이크 정렬
////////////////////////////////

/*
#include <iostream>
using namespace std;

void flip(int arr[], int i) {
	int tmp, start = 0;
	while (start < i) {
		tmp = arr[start];
		arr[start] = arr[i];
		arr[i] = tmp;
		start++;
		i--;
	}
}

int findMax(int arr[], int n) {
	int mi, i;
	for (mi = 0, i = 0; i < n; ++i)
		if (arr[i] > arr[mi])
			mi = i;
	return mi;
}

void pancakeSort(int *arr, int n) {
	for (int curr_size = n; curr_size > 1; --curr_size) {
		int mi = findMax(arr, curr_size);

		if (mi != curr_size - 1) {
			flip(arr, mi);
			flip(arr, curr_size - 1);
		}
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[] = { 23, 10, 20, 11, 12, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	pancakeSort(arr, n);

	puts("Sorted Array ");
	printArray(arr, n);
	return 0;
}
*/