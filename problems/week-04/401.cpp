#include <iostream>

using namespace std;

int main() {
	int x[100], y[2] = {-1, 0}, i, n;

	for(i = 0; i <= 99; i++) {
		cin >> x[i];
		if (x[i] < y[0] || x[i] == y[1]) i--;
		if (x[i] == y[0]) break;
	}

	n = i;
	cout << i << endl;

	for(i = 0; i <= n - 1; i++)
		cout << x[i] << " ";

	return 0;
}