#include <iostream>

using namespace std;

int main() {
	int m;
	double i, n;

	cin >> n;
	m = int (n);
	n = 1;

	for (i = 1; i <= m; i++) {
		n = n * (1 + 1 / (i * i));
	}

	cout << n;

	return 0;
}