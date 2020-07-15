#include <iostream>
#include <string>

using namespace std;

int main() {
	int size;
	string morse[36] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
						"-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",
						"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};
	string str, strMorse = "";

	getline(cin, str);

	size = str.length();
	transform(str.begin(), str.end(), str.begin(), ::tolower);

	for(int i = 0; i < size; i++) {
		if(str[i] >= '0' && str[i] <= '9') {
			strMorse += morse[int(str[i]) - 22];
			strMorse += char(32);
		}

		if(str[i] >= 'a' && str[i] <= 'z') {
			strMorse += morse[int(str[i]) - 97];
			strMorse += char(32);
		}

		if(str[i] == 32) strMorse += "   ";
	}

	cout << strMorse << endl;

	return 0;
}