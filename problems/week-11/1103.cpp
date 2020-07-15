#include <iostream>
#include <string>

using namespace std;

int main() {
	int i = -1, size;
	string str, needFind;

	getline(cin, str);
	cin >> needFind;

	size = needFind.length();

	while(str.find(needFind) != -1) {
		i = str.find(needFind);
		str.replace(i, size, size, '#');
	}

	cout << i << endl;

	return 0;
}