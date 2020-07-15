#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void mostRecent(char *text) {
	int size = 1;
	string *data = new string[1000];
 
	char *pch = strtok(text, " #?,.<>;:-+_=!@#$^&*()ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	int index = 0;
	size = 1;
	while(pch != NULL) {
		data[index] = pch;
		int m = data[index].length();

		for(int i = 0; i < (200 - m); i++)
			data[index] = "0" + data[index];

		pch = strtok(NULL, " #?,.<>;:-+_=!@#$^&*()ABCDEFGHIJKLMNOPQRSTUVWXYZ");
		index++;
		size++;
	}

	delete []pch;

	string str, str2;
	for(int i = 0; i < size; i++) {
		if(data[i] > str2) str2 = data[i];
	}

	delete []data;

	for(int i = 0; i < 200; i++) {
		if(str2[i] != '0') break;
		else str2[i] =  '#';
	}

	remove_copy(str2.begin(), str2.end(), back_inserter(str), '#');

	int i = 0;
	size = str.length();
		
	if(size % 3 == 1) {cout << str[i] << " "; i++;}
		else if(size % 3 == 2) {cout << str[i] << str[i + 1] << " "; i += 2;}

	for(int n = i; n < size; n += 3)
		cout << str[n] << str[n + 1] << str[n + 2] << " ";
}

int main() {
	int i = 0;
	char text[1000];

	cin.getline(text, 1000);

	while(text[i]) {
		text[i] = toupper(text[i]);
		i++;
	}

	mostRecent(text);

	return 0;
}