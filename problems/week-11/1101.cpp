#include <iostream>
#include <string>

using namespace std;

int main() {
	int res = 0;
	string str, needFind;

	getline(cin, str);
	cin >> needFind;

	res = str.find(needFind);

	cout << (res == 0 ? -1 : res) << endl;

	return 0;
}