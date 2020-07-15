#include <iostream>
#include <cstring>

using namespace std;

struct Train {
	int ID;
	char *FromAddress;
	char *ToAddress;
	char *DepartureTime;
};

char upCaseFunc(char *text);
char convert(char *text, int io);

int main() {
	int size, index = 0;

	cin >> size;
	Train *timetable = new Train[size];

	for(int i = 0; i < size; i++) {
		cin >> (timetable+i)->ID;

		(timetable+i)->FromAddress = new char[17];
		cin >> (timetable+i)->FromAddress;

		(timetable+i)->ToAddress = new char[17];
		cin >> (timetable+i)->ToAddress;

		(timetable+i)->DepartureTime = new char[6];
		cin >> (timetable+i)->DepartureTime;

		*timetable[i].FromAddress = upCaseFunc((timetable+i)->FromAddress);
		*timetable[i].ToAddress = convert((timetable+i)->ToAddress, 1);
	}

	for(int i = 0; i < size * size; i++) {
		if(index == size - 1) index = 0;

		if(strcmp(timetable[index].ToAddress, timetable[index + 1].ToAddress) > 0) swap(timetable[index], timetable[index + 1]);

		index++;
	}

	for(int i = 0; i < size; i++)
		*timetable[i].ToAddress = convert((timetable+i)->ToAddress, 0);

	for(int i = 0; i < size; i++)
		cout << timetable[i].ID << " " << timetable[i].FromAddress << " " << timetable[i].ToAddress << " " << timetable[i].DepartureTime << endl;

	for(int i = 0; i < size; i++) {
		delete [](timetable+i)->FromAddress;
		delete [](timetable+i)->ToAddress;
		delete [](timetable+i)->DepartureTime;
	}

	delete []timetable;
	
	return 0;
}

char upCaseFunc(char *text) {
	int i = 0;

	while(text[i]) {
		text[i] = toupper(text[i]);
		i++;
	}

	return *text;
}

char convert(char *text, int io) {

	if(io == 1) {
		*text = upCaseFunc(text);

		int i = strlen(text);

		while(i < 16) {
			text[i] = '#';
			i++;
		}
	}
	else {
		for(int j = 0; j < 16; j++)
			if(text[j] == '#') text[j] = char(0);
	}

	return *text;
}