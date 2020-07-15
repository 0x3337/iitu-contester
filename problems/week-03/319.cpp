#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	int y = 0;
	double a = 13, b = 0, x, z, res, resM[7] = {1, 1, 1, 1, 1, 1, 1};

	cin >> x;

	for(int i = 1; i <= 7; i++) {
		z = a;

		while(a >= 1) {
			resM[y] = resM[y] * a;
			a--;
		}
		a = z;

		resM[y] = (pow(x, a) * pow((-1), b))/ resM[y];

		if(y < 6) {
			y++;
			b++;
			a = a - 2;
		}
	}

	resM[6] = x;
	res = resM[0] + resM[1] + resM[2] + resM[3] + resM[4] + resM[5] + resM[6];

	cout << res;

	return 0;
}