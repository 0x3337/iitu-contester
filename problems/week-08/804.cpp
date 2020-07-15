#include <iostream>
#include <cstring>

using namespace std;

int func(char* text) {
	char res[101] = "";
	int n = 0;

	for(int i = 0; i < 101; i++)
		if(isalpha(text[i])) {res[n] = text[i]; n++;}

	cout << res;
	
	return 0;
}

int main() {
	char text[101] = "";

	cin >> text;

	func(text);

	return 0;
}