#include <iostream>

using namespace std;

int odd(int* arr, int size);
int even(int* arr, int size);

int odd(int* arr, int size) {
	for(int i = 0; i < size; i++)
		if((i + 1) % 2 != 0) cout << arr[i] << " ";

	return 0;
}

int even(int* arr, int size) {
	for(int i = 0; i < size; i++)
		if((i + 1) % 2 == 0) cout << arr[i] << " ";

	return 0;
}

int main() {
	int size;

	cin >> size;

	int *arr = new int[size];

	for(int i = 0; i < size; i++)
		cin >> arr[i];

	odd(arr, size);
	even(arr, size);

	return 0;
}