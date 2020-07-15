#include <iostream>
#include <string>

using namespace std;

int func() {
	int amount1 = 0, amount2 = 0, io;
	string str;
	cin >> str;

	if(str.length() < 7) return -1;

	for(int i = 0; i < str.length(); i++) {
		if(str[i] == 48) {
			if(io == 0) amount1++;
			else amount1 = 1;
			io = 0;
		}
		else {
			if(io == 1) amount2++;
			else amount2 = 1;
			io = 1;
		}

		if(amount1 == 7 || amount2 == 7) return 1;
	}

	return 0;
}

int main() {
	cout << (func() == 1 ? "YES" : "NO");

	return 0;
}