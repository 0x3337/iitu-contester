#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int sizeN, sizeM, i = 0, n = 0, max = 0;

	cin >> sizeN >> sizeM;

	if (sizeN >= 1 && sizeM <= 100) {
		int x[sizeN][sizeM];
		int y[sizeM];

		for (i = 0; i < sizeN; i++)
			for (n = 0; n < sizeM; n++)
				cin >> x[i][n];

		for (i = 0; i < sizeM; i++) {
			y[i] = 0;
			for (n = 0; n < sizeN; n++)
				y[i] += x[n][i];
		}

		max = *max_element(y, y + sizeM);

		for (i = 0; i < sizeM; i++)
			if (y[i] == max) break;

		i += 1;

		cout << i;
	}

	return 0;
}