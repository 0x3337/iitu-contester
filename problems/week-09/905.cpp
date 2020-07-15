#include <iostream>

using namespace std;

void mostRecent(char *text) {
	int size = 1;
	for (int i = 0; i < 1000; i++)
		if (text[i] == ' ') size++;
 
	string *data = new string[size];
 
	char *pch = strtok(text, " ");
	int index = 0;
	while (pch != NULL) {
		data[index] = pch;
		pch = strtok(NULL, " ");
		index++;
	}

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++)
			if(data[i] == data[j] && i != j) data[j] = "";
 	}

 	string word;
 	for(int i = 0; i < size; i++) {
 		if(data[i] != "") word += data[i] + " ";
 	}

	delete []data;

	cout << word;
}

int main() {
	int i = 0;
	char text[1000];

	cin.getline(text, 1000);

	mostRecent(text);

	return 0;
}