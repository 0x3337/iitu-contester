#include <iostream>

using namespace std;

int main() {
	int size, i = 0, n = 0;

	cin >> size;

	if (size >= 1 && size <= 100) {
		int x[size][size];
		int y[size][size];
		int z[size][size];

		for (i = 0; i < size; i++) {
			for (n = 0; n < size; n++) {
				cin >> x[i][n];
			}
		}

		for (i = 0; i < size; i++) {
			for (n = 0; n < size; n++) {
				cin >> y[i][n];
			}
		}

		for (i = 0; i < size; i++) {
			for (n = 0; n < size; n++) {
				z[i][n] = x[i][n] + y[i][n];
			}
		}

		cout << endl;

		for (i = 0; i < size; i++) {
			for (n = 0; n < size; n++) {
				cout << z[i][n] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}