#include <iostream>

using namespace std;

int func(int* arr, int size) {
	int res, io = 0, io2 = 0;

	for(int i = 0; i < size; i++) {
		if(arr[i] == 0 && io2 == 0) {io = 1; io2 = 1;}
		else if(arr[i] == 0 && io2 == 1) io = 0;

		if(io == 1 && io2 == 1) res += arr[i];
	}
		
	return res;
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