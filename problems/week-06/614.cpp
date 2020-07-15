#include <iostream>
#include <cstring>

using namespace std;

char res[101] = "";

char btoc(char* text) {
	int i, n = 0, t = 0;

	for(i = 0; i < 101; i++) {
		if(isupper(text[i])) text[i]=tolower(text[i]);
		else text[i]=toupper(text[i]);

		if(isalpha(text[i])) {res[n] = text[i]; n++;}
	}

	cout << res;
	
	return 1;
}

int main() {
	char text[101] = "";

	cin >> text;

	btoc(text);

	return 0;
}