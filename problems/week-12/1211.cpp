#include <iostream>

using namespace std;

int main() {
	int num[14] = {0}; 
	int cards[5];

	for (int i = 0; i < 5; i++) 
		cin >> cards[i];

	for (int i = 1; i < 14; i++) 
		for (int j = 0; j < 5; j++) 
			if(i ==cards[j]) num[i] ++;

	for (int i = 1; i < 14; i++) {
		if (num[i] == 5) {cout << "Impossible" << endl; return 0;} 
		else if (num[i] == 4) {cout << "Four of a Kind" << endl; return 0;} 
		else if (num[i] == 3) {
			for (int j =1; j < 14; j++) {
				if (num[j] == 2) {
					cout << "Full House" << endl; 
					return 0;
				}
				else if (num[j] == 1) {cout << "Three of a Kind" << endl; return 0;}
			}
		}
		else if(num[i] == 2) {
			for(int j = 1; j < 14 ;j++) {
				if(num[j] == 3) {cout << "Full House" << endl; return 0;}
				else if(num[j] == 2 && j != i) {cout << "Two Pairs" << endl; return 0;}
			} 
			cout << "One Pair" << endl; 
			return 0; 
		}
		else if(num[i] == 1) {
			for(int j = 1; j < 14; j++) {
				if(num[j] == 1 && num[j + 1] == 1 && num[j + 2] == 1 && num[j + 3] == 1 && num[j + 4] == 1) {
					cout << "Straight" << endl; 
					return 0; 
				} 
			}
		} 
	}

	cout << "Nothing" << endl;
}