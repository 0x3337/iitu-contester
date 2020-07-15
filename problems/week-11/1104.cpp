#include <iostream>
#include <string>
 
using namespace std;

int main() {
	int size;
	string str, needFind;

	getline(cin, str);
	cin >> needFind;

	size = needFind.length();

	for(int index = 0; index < size; index++)
		while(str.find(needFind[index]) != -1)
			str.replace(str.find(needFind[index]), 1, 1, '*');

	cout << str << endl;

	return 0;
}