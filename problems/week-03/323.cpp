#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, i, res = 1;

	cin >> x;

	res = pow(x, 2);

	if (x != 0)
		for (i = 8; i > 0; i--)
			res = pow(x, 2) + pow(2, i) / res;

	res = x / res;

	cout << res;

	return 0;
}