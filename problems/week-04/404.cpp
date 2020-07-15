#include <iostream>

using namespace std;

int main() {
	int size, i, min = 2147483647, index;

	cin >> size;
	int x[size];

	if (size >= 1 && size <= 1000) {

		for (i = 0; i <= (size - 1); i++)
			cin >> x[i];

		for (i = (size - 1); i >= 0; i--) {
			if (x[i] <= min) {
				index = i;
				min = x[i];
			}
		}

		cout << index;
	}
	return 0;
}