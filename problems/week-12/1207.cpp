#include <iostream>
#include <string>

using namespace std;

int main() {
	int u = 0, l = 0;
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if(islower(str[i])) l++;
		if(isupper(str[i])) u++;
	}

	if(u > l) transform(str.begin(), str.end(), str.begin(), ::toupper);
	else transform(str.begin(), str.end(), str.begin(), ::tolower);

	cout << str;
	return 0;
}