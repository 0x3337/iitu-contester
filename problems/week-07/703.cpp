#include <iostream>
#include <string>

using namespace std;

int x, i = 0;
string y;

string func(string f) {
	if(i < x) {
		i++;
		cin >> y;
		cout << func(y) << endl;
	}
	else return y;

	return f;
}

int main() {
	cin >> x;
	func(y);
	return 0;
}