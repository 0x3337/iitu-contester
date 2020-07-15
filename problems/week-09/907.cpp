#include <iostream>
#include <cstring>

using namespace std;

void mostRecent(char *str, char *str2, char *str3) {
	int size[3];
	size[0] = strlen(str);
	size[1] = strlen(str2);
	size[2] = strlen(str3);

	if(size[0] > size[1]) {
		if(size[0] > size[2]) cout << str;
		else {
			if(size[2] > size[0]) cout << str3;
			else {
				if(strcmp(str, str2) > 0) cout << str;
				else {
					if(strcmp(str2, str3) > 0) cout << str2;
					else cout << str2;
				}
			}
		}
	}
	else {
		if(size[1] > size[2]) cout << str2;
		else {
			if(size[2] > size[1]) cout << str3;
			else {
				if(strcmp(str, str2) > 0) cout << str;
				else {
					if(strcmp(str2, str3) > 0) cout << str2;
					else cout << str3;
				}
			}
		}
	}
}

int main() {
	char str[100], str2[100], str3[100];

	cin >> str >> str2 >> str3;

	mostRecent(str, str2, str3);
		
	return 0;
}