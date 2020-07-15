#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void upCaseFunc(char *text);

struct Train {
	int ID;
	char *address;
	char *times;
};

int main() {
	int size, index, io = 0;

	cin >> size;
	Train *timetable = new Train[size];

	for(int i = 0; i < size; i++) {
		(timetable+i)->address = new char[64];
		(timetable+i)->times = new char[6];
		cin >> (timetable+i)->ID >> (timetable+i)->address >> (timetable+i)->times;

		upCaseFunc((timetable+i)->address);
	}

	char *city = new char[64];
	char minTime[6] = "23:59";
	cin >> city;
	upCaseFunc(city);

	for(int i = 0; i < size; i++)
		if(!strcmp(city, timetable[i].address) && (strcmp(minTime, timetable[i].times) > 0)) {
			strcpy(minTime, timetable[i].times);
			index = i;
			io = 1;
		}

	if(io == 1) cout << timetable[index].ID << "_" << timetable[index].address << "_" << minTime << endl;
	else cout << "Impossible" << endl;

	for(int i = 0; i < size; i++) {
		delete [](timetable+i)->address;
		delete [](timetable+i)->times;
	}

	delete []timetable;
	delete []city;

	return 0;
}



void upCaseFunc(char *text) {
	int i = 0;

	while(text[i]) {
		text[i] = toupper(text[i]);
		i++;
	}
}