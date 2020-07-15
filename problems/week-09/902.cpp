#include <iostream>
#include <cstring>

using namespace std;

int func(char *str, int size) {

	for(int i = 0; i < size; i++) {
		if(str[i] == '!') str[i] = '.';
		cout << str[i];
	}
	
	return 0;
}

int main() {
	char str[101];

	cin.getline(str, 101);

	int size = strlen(str);

	func(str, size);
		
	return 0;
}