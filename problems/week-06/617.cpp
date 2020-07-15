#include <iostream>

using namespace std;

int s1, s2;

int func(int size) {
	int min = 37377, x, y, i;

	int* arr = new int[size];

	for(i = 0; i < size; i++) {
		cin >> arr[i];
	}

	for(i = 0; i < size; i++) {
		if(i > 0 && i <= size - 1) {
			x = arr[i] - arr[i - 1];
			if(x < 0) x *= (-1);

			if(x < min) {
				min = x;
				s1 = i;
				s2 = i + 1;
			}
		}
		else {
			y = arr[size - 1] - arr[0];
			if(y < 0) y *= (-1);

			if(y < min) {
				min = y;
				s1 = size;
				s2 = 1;
			}  
		}
	}

	return 0;
}

int main() {
	int size;

	cin >> size;

	func(size);

	cout << s1 << " " << s2;

	return 0;
}