#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int sizeN, sizeM, i = 0, n = 0, m = 0;

	cin >> sizeN >> sizeM;

	if (sizeN >= 1 && sizeM <= 100) {
		int x[sizeN][sizeM];
		int y[sizeM + sizeN];

		for (i = 0; i < sizeN; i++)
			for (n = 0; n < sizeM; n++) {
				cin >> x[i][n];
				if (x[i][n] > 0) {y[m] = x[i][n]; m++;}
			}

		sort(y, y + m);

		cout << m << endl;
		for (i = 0; i < m; i++)
			cout << y[i] << " ";
	}

	return 0;
}