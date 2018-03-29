////////////////////////////////
//	BogoSort or Permutation Sort
//	바보 정렬
////////////////////////////////
/*
#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
	while (--n > 1)
		if (arr[n] < arr[n - 1])
			return false;
	return true;
}

void shuffle(int arr[], int n) {
	for (int i = 0; i < n; i++)
		swap(arr[i], arr[rand() % n]);
}

void bogosort(int arr[], int n) {
	while (!isSorted(arr, n))
		shuffle(arr, n);
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int a[] = { 3, 2, 5, 1, 0, 4 };
	int n = sizeof a / sizeof a[0];
	bogosort(a, n);
	printf("Sorted array :\n");
	printArray(a, n);
	return 0;
}
*/