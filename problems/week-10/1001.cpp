#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

char upCaseFunc(char *text);

struct Train {
	int ID;
	char *address;
	char *times;
};

int main() {
	int size, io = 0;
	char *city = new char[64];

	cin >> size;

	Train *timetable = new Train[size];

	for(int i = 0; i < size; i++) {
		cin >> (timetable+i)->ID;

		(timetable+i)->address = new char[64];
		cin >> (timetable+i)->address;

		(timetable+i)->times = new char[6];
		cin >> (timetable+i)->times;
		*timetable[i].address = upCaseFunc((timetable+i)->address);
	}

	cin >> city;

	*city = upCaseFunc(city);

	for(int i = 0; i < size; i++) {
		if(!strcmp(city, timetable[i].address)) {cout << timetable[i].ID << "_" << timetable[i].address << "_" << timetable[i].times; io = 0; break;}
		else io = 1;
	}

	if(io == 1) cout << "Impossible";

	for(int i = 0; i < size; i++) {
		delete [](timetable+i)->address;
		delete [](timetable+i)->times;
	}

	delete []timetable;
	delete []city;

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