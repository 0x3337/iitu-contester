#include <iostream>
#include <cstring>

using namespace std;

int func(char *str, int size) {

	for(int i = 0; i <= size - 4; i++)
		if(str[i] == 'I' && str[i + 1] == 'I' && str[i + 2] == 'T' && str[i + 3] == 'U') return 1;
		
	return 0;
}

int main() {
	char str[1001] = "";

	cin >> str;

	int size = strlen(str);

	for(int i = 0; i < size; i++)
		str[i] = toupper(str[i]);

	cout << (func(str, size) == 1 ? "YES" : "NO");
		
	return 0;
}