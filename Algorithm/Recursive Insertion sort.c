////////////////////////////////
//	Recursive Insertion Sort
//	Àç±Í »ðÀÔ Á¤·Ä
////////////////////////////////

/*
#include <stdio.h>

void insertSortRecursive(int *arr,int  n) {
	if (n <= 1)return;
	insertSortRecursive(arr, n - 1);

	int last = arr[n - 1];
	int j = n - 2;

	while (j >= 0 && arr[j] > last) {
		arr[j + 1] = arr[j];
		j = j - 1;
	}
	arr[j+1] = last;
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	int arr[] = { 12,11,13,5,6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertSortRecursive(arr, n);
	printf("Sorted Array : ");
	printArray(arr, n);

	return 0;
}
*/