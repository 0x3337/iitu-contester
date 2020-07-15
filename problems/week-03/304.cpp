#include <iostream>

using namespace std;

int main() {
	float x, y, z, min, max;

	cin >> x >> y >> z;

	if(x + y <= z * 2) {
		max = z;

		if(x >= y) {
			min = y;
		}
		else {
			min = x;
		}
	}
	else {
		min = z;

		if(x >= y) {
			max = x;
		}
		else {
			max = y;
		}
	}

	cout << min << " " << max;

	return 0;
}