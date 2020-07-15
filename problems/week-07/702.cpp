#include <iostream>

using namespace std;

int x, y, i = 0;

int func(int f) {
	if(i < x) {
		i++;
		cin >> y;
		cout << func(y) << " ";
	}
	else return y;
	
	return f;
}

int main() {
	cin >> x;
	func(x);
	return 0;
}