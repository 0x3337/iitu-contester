#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, i;
	double a, b, res;

	cin >> a >> n;

	res = 1 / a;

	for(i = 1; i <= n; i++) {
		b = pow(a, (2 * i));
		res = res + 1 / b;
	}

	cout << res;

	return 0;
}