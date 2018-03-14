////////////////////////////////
//	Merge Sort
//	병합 정렬
////////////////////////////////

/*
#include <stdio.h>
#define arSIZE 7

void merge(int arr[], int s, int m, int d) {
	int arTmp[arSIZE];
	int i, j, k;
	i = s;
	j = m + 1;
	k = s;

	while (i <= m && j <= d) {
		if (arr[i] <= arr[j]) {
			arTmp[k] = arr[i];
			i++;
		}
		else {
			arTmp[k] = arr[j];
			j++;
		}
		k++;
	}

	if (i > m) {
		for (j; j <= d; j++, k++)
			arTmp[k] = arr[j];
	}
	else {
		for (i; i <= m; i++, k++)
			arTmp[k] = arr[i];
	}

	for (int n = s; n <= d; n++)
		arr[n] = arTmp[n];
}

void mergeSort(int arr[], int s, int d) {
	if (s < d) {
		int m = (s + d) / 2;
		mergeSort(arr, s, m);
		mergeSort(arr, m + 1, d);
		merge(arr, s, m, d);
	}
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	int arr[] = { 12, 11, 13, 5, 6, 7, 10 };

	mergeSort(arr, 0, arSIZE - 1);
	printf("Sorted array : ");
	printArray(arr, arSIZE);
	return 0;
}
*/