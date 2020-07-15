#include <iostream>

using namespace std;

int main() {
	int size, i = 0, n = 0, m = 1, res = 0;

	cin >> size;

	if(size >= 1 && size <= 100) {
		int x[size][size];

		for(i = 0; i < size; i++)
			for(n = 0; n < size; n++)
				cin >> x[i][n];

		for(i = 1; i < size; i++) {
			for(n = 0; n < m; n++)
				res += x[i][n];
			m++;
		}

		cout << res;
	}

	return 0;
}