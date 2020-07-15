#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, x;

	cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> a10;

	x = a1 + pow(a2, 2) + pow(a3, 3) + pow(a4, 4) + pow(a5, 5) + pow(a6, 6) + pow(a7, 7)+ pow(a8, 8) + pow(a9, 9) + pow(a10, 10);

	cout << fixed << x;

	return 0;
}