#include <iostream>
#include <string>

using namespace std;
int loop = 0;

int func(string arr[], string find, int left, int right) {
	cout << loop << endl;
	cout << "left:" << left << " right:" << right;
	loop++;
	if (left > right) return -1;

	int mid = (static_cast<unsigned>(left) + static_cast<unsigned>(right)) >> 1;
	cout << " mid:" << mid << endl;

	if (arr[mid] == find) return mid + 1;
	if (arr[mid] < find) return func(arr, find, mid + 1, right);
	if (arr[mid] > find) return func(arr, find, left, mid - 1);

	return 0;
}

int main() {
	int size;
	cin >> size;

	string find;
	string *arr = new string[size];

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	cin >> find;

	cout << func(arr, find, 0, size) << endl;

	delete [] arr;

	return 0;
}