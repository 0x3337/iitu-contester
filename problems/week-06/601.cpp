#include <iostream>
#include <algorithm>

using namespace std;

int func(int a, int b, int c, int d) {
	int x[4], min;

	x[0] = a;
	x[1] = b;
	x[2] = c;
	x[3] = d;

	min = *min_element(x, x + 4);

	return min;
}

int main() {
	int a, b, c, d;

	cin >> a >> b >> c >> d;
	cout << func(a, b, c, d);

	return 0;
}