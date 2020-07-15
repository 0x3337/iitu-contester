#include <iostream>
#include <algorithm>

using namespace std;

int func(int* arr, int size) {
	int res = 0, io = 0, maxi;

	maxi = *max_element(arr, arr + size);

	for(int i = size - 1; i >= 0; i--) {
		if(arr[i] == maxi) io = 1;

		if(io == 1 && arr[i] > 0) res += arr[i];
	}
		
	return res - maxi;
}

int main() {
	int size;

	cin >> size;

	int *arr = new int[size];

	for(int i = 0; i < size; i++)
		cin >> arr[i];

	cout << func(arr, size);

	return 0;
}