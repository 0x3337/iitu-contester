#include <iostream>
#include <algorithm>

using namespace std;

int func(unsigned int *x) {
	swap(x[0], x[1]);

	cout << x[0] << " " << x[1];

	return 0;
}

int main() {
	unsigned int *x = new unsigned int[2];

	cin >> x[0] >> x[1];

	func(x);

	delete x;

	return 0;
}