#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int m;
	double a, n;

	cin >> a >> n;
	m = int(n);
	n = 0;

	for(int i = 1; i <= m; i++)
		n = a + n;

	cout << n;

	return 0;
}