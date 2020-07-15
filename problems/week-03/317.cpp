#include <iostream>

using namespace std;

int main() {
	int n, i;
	double a, b, res = 0;

	cin >> a >> n;

	for(i = 0; i < n + 1; i++) {
		if(i > 0) b = b * (a + i);
		else b = a;

		res = res + 1 / b;
	}

	cout << res;

	return 0;
}