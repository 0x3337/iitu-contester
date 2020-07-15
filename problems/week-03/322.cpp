#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x, i;
	double res;

	cin >> x;
	x = 1;

	for(i = 103; i > 1; i = i - 2) {
		if (i == 103) res = 103;

		res = (i - 2) + 1 / res;
	}

	res = 1 / res;

	cout << res;

	return 0;
}