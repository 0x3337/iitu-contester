#include <iostream>

using namespace std;

int main() {
	int n, i;
	double a, b = 1;

	cin >> a >> n;

	for(i = 0; i < n; i++)
		b = (a + i)*b;

	cout << b;

	return 0;
}