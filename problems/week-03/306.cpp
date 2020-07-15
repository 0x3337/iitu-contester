#include <iostream>

using namespace std;

int main() {
	int x;

	cin >> x;

	if (((x % 100 != 0) && (x % 4 == 0)) || (x % 400 == 0)) cout << 366;
	else cout << 365;

	return 0;
}