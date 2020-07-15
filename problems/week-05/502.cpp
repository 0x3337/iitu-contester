#include <iostream>

using namespace std;

int main() {
	int size, i, n, a = 0, b = 0;

	cin >> size;

	if (size >= 1 && size <= 100) {
		int x[size][size];

		for (i = 0; i < size; i++) {
			n = 0;
			while (n < size) {
				cin >> x[i][n];
				n++;
			}
		}

		for (i = 0; i < size; i++)
			a += x[i][i];

		n = 0;

		for (i = (size - 1); i >= 0; i--) {
			b += x[i][n];
			n++;
		}

		cout << a << " " << b;
	}

	return 0;
}