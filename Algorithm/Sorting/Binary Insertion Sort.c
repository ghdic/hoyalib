////////////////////////////////
//	Binary Insertion Sort
//	이진 삽입 정렬
////////////////////////////////
/*
#include <stdio.h>

int binarySearch(int arr[], int item, int low, int high) {
	if (high <= low)
		return (item > arr[low]) ? (low + 1) : (low);
	int mid = (low + high) / 2;
	if (item == arr[mid])
		return mid + 1;

	if (item > arr[mid])
		return binarySearch(arr, item, mid + 1, high);
	return binarySearch(arr, item, low, mid - 1);
}

void insertionSort(int arr[], int n) {
	int i, loc, j, selected;

	for (i = 1; i < n; i++) {
		j = i - 1;
		selected = arr[i];

		loc = binarySearch(arr, selected, 0, j);

		while (j >= loc) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = selected;
	}
}

int main()
{
	int a[] = { 37, 23, 0, 17, 12, 72, 31,
		46, 100, 88, 54 };
	int n = sizeof(a) / sizeof(a[0]), i;

	insertionSort(a, n);

	printf("Sorted array: \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	puts("");
	return 0;
}
*/