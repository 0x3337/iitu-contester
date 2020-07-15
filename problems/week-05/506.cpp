#include <iostream>

using namespace std;

int main() {
	int size, i = 0, n = 0, check;

	cin >> size;

	if (size >= 1 && size <= 100) {
		int x[size][size];

		for (i = 0; i < size; i++) {
			for (n = 0; n < size; n++) {
				cin >> x[i][n];
			}
		}

		for (i = 0; i < size; i++) {
			for (n = 0; n < size; n++) {
				if (x[i][n] == x[n][i]) check = 1;
				else {check = 0; break;}
			}
		}

		cout << (check == 1 ? "YES" : "NO");
	}

	return 0;
}