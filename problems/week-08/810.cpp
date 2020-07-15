#include <iostream>

using namespace std;

bool compare(char * s1, int size1, char * s2, int size2) {
	if(strcmp(s1, s2)) return 0;
	else return 1;
}

int main() {
	char s1[100], s2[100];
	int size1, size2;

	cin >> s1 >> s2;

	size1 = strlen(s1);
	size2 = strlen(s2);

	cout << (compare(s1, size1, s2, size2) == 1 ? "YES" : "NO");

	return 0;
}