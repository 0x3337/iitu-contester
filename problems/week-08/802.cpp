#include <iostream>
#include <algorithm>

using namespace std;

int func(int *arr, int size) {
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";

	return 0;
}

int main() {
	int size;
	
	cin >> size;

	int *arr = new int[size];

	for(int i = 0; i < size; i++)
		cin >> arr[i];

	func(arr, size);

	return 0;
}