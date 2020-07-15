#include <iostream>

using namespace std;

int main() {
	double x;

	cin >> x;

	x = ((x-2) * (x-4) * (x-8) * (x-16) * (x-32) * (x-64)) / ((x-1) * (x-3) * (x-7) * (x-15) * (x-31) * (x-63));

	cout << x;

	return 0;
}