#include <iostream>
#include <cmath>

using namespace std;

int  boolElection(bool x, bool y, bool z) {
	if(x == y || x == z)
		cout << x;
	else {
		if(y == z)
			cout << y;
	}

	return x;
}

int main() {
	bool x, y, z;

	cin >> x >> y >> z;
	boolElection(x, y, z);

	return 0;
}