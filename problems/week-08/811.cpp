#include <iostream>

using namespace std;

bool compare(char* str, int size) {
	int m = size - 1;
	for(int i = 0; i < size / 2; i++) {
		if(str[i] != str[m]) return 0;
		m--;
	}

	return 1;
}

int main() {
	char str[100];
	int size;

	cin >> str;

	size = strlen(str);

	cout << (compare(str, size) == 1 ? "YES" : "NO");

	return 0;
}