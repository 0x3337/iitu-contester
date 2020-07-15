#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int m;
	double res = 0, n, i;

	cin >> n;
	m = int(n);
	n = 0;

	for(i = 1; i <= m; i++) {
		res = res + sin(i);
		n = n + 1 / (res);
	}

	cout << n;

	return 0;
}