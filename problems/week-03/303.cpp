#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b, c, res, x, y;

	cin >> a >> b >> c;

	res = b * b - 4 * a * c;

	if(res < 0) {
		cout << "no solution";
	}
	else {
		res = sqrt(res);

		x = ((-1) * b + res) / (2 * a);
		y = ((-1) * b - res) / (2 * a);

		if (x == y) {
			cout << x;
		}
		else {
			cout << x << " " << y;
		}
	}

	return 0;
}