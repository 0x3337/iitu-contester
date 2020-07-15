#include <iostream>

using namespace std;

int main() {
	int sizeN, sizeM, i = 0, n = 0, no = 0, a = 1, b = 1;

	cin >> sizeN >> sizeM;

	if (sizeN >= 1 && sizeM <= 100) {
		int x[sizeN][sizeM], y[sizeN];

		for (i = 0; i < sizeN; i++)
			for (n = 0; n < sizeM; n++)
				cin >> x[i][n];

		for (i = 0; i < sizeN; i++) {
			for (n = 0; n < sizeM; n++) {
				if (x[i][n] == -1) {
					a = i + 1;
					b = n + 1;
				}
			}
			if (x[i][n] == -1) {
				a = i + 1;
				b = n + 1;
			}
		}

		if (x[a - 1][b - 1] != -1) no = 1;

		if (no == 0) cout << a << " " << b;
		else cout << "-1 -1";
	}

	return 0;
}