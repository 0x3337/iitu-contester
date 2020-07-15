#include <iostream>
#include <cmath>

using namespace std;

int power(double a, int b) {
	double res;

	res = pow(a, b);
	cout << res;

	return res;
}

int main() {
	double a;
	int b;

	cin >> a >> b;
	power(a, b);

	return 0;
}