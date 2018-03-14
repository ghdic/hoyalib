////////////////////////////////
//	Selection Sort
//	���� ����
////////////////////////////////

/*
#include <stdio.h>

void swap(int *xp, int *yp) {
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void selectionSort(int arr[], int n) {
	int i, j, min_idx;

	
	for (i = 0; i < n - 1; i++) {
		min_idx = i;	//�ּ� ���Ҹ� ã�´�.
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j;

		//�ּ� ���ҿ� i��° ���� �ڸ��� �ٲ۴�.
		swap(&arr[min_idx], &arr[i]);
	}
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Before array: ");
	printArray(arr, n);
	selectionSort(arr, n);
	printf("Sorted array: ");
	printArray(arr, n);
	return 0;
}
*/