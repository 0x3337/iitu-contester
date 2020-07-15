#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x[2][100];
	int y[1] = {0}, i, n = 0;

	for(i = 0; i <= 99; i++) {
		cin >> x[0][i];
		if (x[0][i] == y[0]) break;

		if (x[0][i] < y[0]) i--;
		else x[1][i] = sqrt(x[0][i]);
		n++;
	}

	cout << n << endl;
	n = i - 1;

	for (i = n; i >= 0; i--)
		cout << x[1][i] << endl;

	return 0;
}