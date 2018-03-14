////////////////////////////////
//	Quick Sort
//	퀵 정렬
////////////////////////////////

/*
//pivot 원소가 중앙일때
#include<stdio.h>

void swap(int *xp, int *yp) {
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void quickSort(int arr[], int low, int high) {
	int L = low, R = high;
	int pivot = arr[(low + high) / 2];

	while (L <= R) {
		while (arr[L] < pivot)L++;
		while (arr[R] > pivot)R--;

		if (L <= R) {
			if (L != R)swap(&arr[L], &arr[R]);
			L++; R--;
		}
	}

	if (low < R)quickSort(arr, low, R);
	if (L < high)quickSort(arr, L, high);
}

int main() {
	int arr[] = { 10,7,8,9,1,5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	printf("Sorted Array : ");
	printArray(arr, n);
	return 0;
}
*/

/*
//pivot이 맨 마지막 원소일때
#include <stdio.h>

void swap(int *xp, int *yp) {
	int tmp = *xp;
	*xp = *yp;
	*yp = tmp;
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int partition(int arr[], int low, int high) {
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
		if (arr[j] <= pivot)
			swap(&arr[++i], &arr[j]);
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quickSort(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	printf("Sorted array: ");
	printArray(arr, n);
	return 0;
}
*/