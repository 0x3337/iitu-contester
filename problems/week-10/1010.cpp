#include <iostream>

using namespace std;

void func(char display[8][8]) {
	int amoB = 0, amoW = 0, amoR = 0, amoG = 0;

	for(int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			switch(display[i][j]) {
				case '0': amoB++; display[i][j] = '-'; break;
				case '1': amoW++; display[i][j] = '-'; break;
				case '2': amoR++; break;
				case '3': amoG++; display[i][j] = '-'; break;
			}
		}
	}

	if(amoB != 0 && amoW != 0 && amoR != 0 && amoG != 0) {
		for(int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++)
				cout << display[i][j];
			cout << endl;
		}

		cout << endl << amoB << " " << amoW << " " << amoR << " " << amoG;
	}
	else cout << "BAD INPUT LIST";
}

int main() {
	char display[8][8];

	for(int i = 0; i < 8; i++)
		cin >> display[i];

	func(display);
	
	return 0;
}