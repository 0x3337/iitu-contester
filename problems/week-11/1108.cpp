#include <iostream>
#include <string>

using namespace std;

int main() {
	int i;
	string str, needFind = "aoyeui";

	cin >> str;

	int size = needFind.length();
	transform(str.begin(), str.end(), str.begin(), ::tolower);

	for(int index = 0; index < size; index++)
		while(str.find(needFind[index]) != -1) {
			i = str.find(needFind[index]);
			str.erase(i, 1);
		}

	for(int j = 0; j < str.length(); j++)
		cout << "." << str[j];

	cout << endl;

	return 0;
}