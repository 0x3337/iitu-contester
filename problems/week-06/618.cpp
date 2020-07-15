#include <iostream>

using namespace std;

char func(char str[], int size) {
	int io = 0;

	for(int i = 0; i < size; i++) {
		if((int(str[i]) >= 42 && int(str[i]) <= 57) && (int(str[i]) != 44 && int(str[i]) != 46))
			if((int(str[i]) >= 42 && int(str[i]) <= 47) && (int(str[i]) != 44 && int(str[i]) != 46) && io == 0) io = 1;
			else
				if(int(str[i]) >= 48 && int(str[i]) <= 57) io = 0;
				else {cout << "NO"; goto l;}
		else {cout << "NO"; goto l;}
	}

	cout << "YES";

	l:

	return 0;
}

int main() {
	char str[1001];
	int size;

	cin >> size;
	cin >> str;

	func(str, size);

	return 0;
}