#include <iostream>
#include <cmath>

using namespace std;

int  getSign(int x, int y) {
	if(x < y) cout << "<";
	else {
		if(x > y) cout << ">";
		else cout << "=";
	}
	return x;
}

int main() {
	int x, y;

	cin >> x >> y;
	getSign(x, y);

	return 0;
}