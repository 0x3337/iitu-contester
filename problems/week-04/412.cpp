#include <iostream>

using namespace std;

int main() {
	int size, i, median, n = 0, times[9] = {0}, max = 0;
	double  sum = 0;
	int y[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int x[99] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
				6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
				6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
				5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
				7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7};

	cin >> size;
	median = 99 / 2;

	if (99 >= 1 && size <= 1000) {
		while (n <= 8) {
			for (i = (99 - 1); i >= 0; i--) {
				if (x[i] == y[n]) times[n]++;
			}
			n++;
		}

		for (i = 0; i <= 8; i++)
			if (times[i] >= max) {
				max = times[i];
				n = i;
			}

		for (i = 0; i <= (99 - 1); i++)
			sum = x[i] + sum;

		cout << sum / 99 << endl;

		if (99 % 2 == 0)
			cout << double(x[median - 1] + x[median]) / 2 << endl;
		else cout << x[median] << endl;

		cout << y[n];
	}

	return 0;
}