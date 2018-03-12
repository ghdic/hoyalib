////////////////////////////////
//	Bubble Sort
//	���� ����
////////////////////////////////

/*
#include <stdio.h>

void swap(int *xp, int *yp) {
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void bubbleSort(int arr[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Unsorted array: ");
	printArray(arr, n);
	bubbleSort(arr, n);
	printf("Sorted array: ");
	printArray(arr, n);
	return 0;
}
*/