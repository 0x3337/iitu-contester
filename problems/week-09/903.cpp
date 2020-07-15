#include <iostream>
#include <cstring>

using namespace std;

int func(char *str, int size) {
	int i = 0;

	if(size % 3 == 1) {cout << str[i] << " "; i++;}
		else if(size % 3 == 2) {cout << str[i] << str[i + 1] << " "; i += 2;}

	for(int n = i; n < size; n += 3)
		cout << str[n] << str[n + 1] << str[n + 2] << " ";
	
	return 0;
}

int main() {
	char str[101] = "";

	cin >> str;

	int size = strlen(str);

	func(str, size);
		
	return 0;
}