#include <iostream>

using namespace std;

int func(char *str) {
	int x;
	int size = strlen(str), sum1 = 0, sum2 = 0;

	for(int i = 0; i < size; i++) {
		if(i % 2 == 0) sum1 += int(str[i]) - 48;
		else sum2 += int(str[i]) - 48;
	}

	x = sum1 - sum2;

	if(sum1 == sum2) return 1;
	else if(x % 11 == 0) return 1;

	return 0;
}

int main() {
	char str[1000];

	cin >> str;

	cout << (func(str) == 1 ? "YES" : "NO");

	return 0;
}