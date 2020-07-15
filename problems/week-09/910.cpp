#include <iostream>

using namespace std;

void func(char *str) {
	int size = strlen(str), res = 0;

	for (int i = 0; i < size - 4; i++) {
		if(str[i] == '>' && str[i + 1] == '>' && str[i + 2] == '-' && str[i + 3] == '-' && str[i + 4] == '>') res++;
		if(str[i] == '<' && str[i + 1] == '-' && str[i + 2] == '-' && str[i + 3] == '<' && str[i + 4] == '<') res++;
	}

	cout << res << endl;
}

int main() {
	char str[10000];

	cin >> str;

	func(str);

	return 0;
}