#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string str, maxStr;

	cin >> str;
	maxStr = str;

	for(int i = 0; i < str.length(); i++) {
		if(str > maxStr) maxStr = str;
		str.insert(str.begin(), str[str.length() - 1]);
		str.erase(str.end() - 1);
	}

	cout << maxStr;

	return 0;
}