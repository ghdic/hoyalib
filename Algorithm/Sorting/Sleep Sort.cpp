////////////////////////////////
//	Sleep Sort
//	슬립 정렬
////////////////////////////////
/*
#include <iostream>
#include <Windows.h>
#include <process.h>
using namespace std;

void routine(void *a) {
	int n = *(int *)a;

	Sleep(n);

	cout << n << " ";
}

void sleepSort(int arr[], int n) {
	HANDLE *threads = new HANDLE[n];

	for (int i = 0; i < n; i++)
		threads[i] = (HANDLE)_beginthread(&routine, 0, &arr[i]);

	WaitForMultipleObjects(n, threads, TRUE, INFINITE);
	return;
}

int main()
{
	int arr[] = { 34, 23, 122, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Sorted Array : ";
	sleepSort(arr, n);

	return(0);
}
*/