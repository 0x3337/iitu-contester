#include <iostream>

using namespace std;

int main() {
	int sizeN, sizeM, i = 0, n = 0;

	cin >> sizeN >> sizeM;

	if (sizeN >= 1 && sizeM <= 100) {
		int x[sizeN][sizeM], y[sizeN];

		for (i = 0; i < sizeN; i++)
			for (n = 0; n < sizeM; n++)
				cin >> x[i][n];

		for (i = 0; i < sizeN; i++) {
			for (n = 0; n < sizeM; n++)
				if (x[i][n] == 0) break;

			if (x[i][n] == 0) break;
		}

		i += 1;
		n += 1;

		cout << i << " " << n;
	}

	return 0;
}