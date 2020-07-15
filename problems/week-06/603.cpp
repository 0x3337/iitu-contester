#include <iostream>
#include <cmath>

using namespace std;

int myXor(bool x, bool y) {
	double res;

	if(x != y) cout << 1;
	else cout << 0;

	return res;
}

int main() {
	bool a, b;

	cin >> a >> b;
	myXor(a, b);

	return 0;
}