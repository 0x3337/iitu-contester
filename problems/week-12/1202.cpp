#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	int size;
	string intStr;

	cin >> size;

	string *str = new string[size];

	for(int i = 0; i < size; i++) {
		cin >> str[i];
		stringstream convert;
		convert << str[i].length() - 2;
		intStr = convert.str();
		if(str[i].length() > 10) str[i].replace(1, str[i].length() - 2, intStr);
	}

	for(int i = 0; i < size; i++)
		cout << str[i] << endl;

	return 0;
}