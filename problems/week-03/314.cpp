#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int m;
	double n;

	cin >> n;
	m = int(n);
	n = 0;

	for(int i = 1; i <= m; i++)
		n = sqrt(2 + n);

	cout << n;

	return 0;
}