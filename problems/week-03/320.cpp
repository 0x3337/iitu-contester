#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, i;
	double x, a;

	cin >> x >> a >> n;

	for(i = 1; i <= n; i++)
		x = pow((x + a), 2);

	x = x + a;

	cout << x;

	return 0;
}