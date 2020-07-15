#include <iostream>
#include <algorithm>

using namespace std;

struct Student{
	int ID;
	char *surname;
	double grade;
};

int main() {
	int size, index = 0;

	cin >> size;

	Student *school = new Student[size];

	for(int i = 0; i < size; i++) {
		cin >> (school+i)->ID;

		(school+i)->surname = new char[64];
		cin >> (school+i)->surname;

		cin >> (school+i)->grade;
	}

	for(int i = 0; i < size * size; i++) {
		if(index == size - 1) index = 0;

		if(school[index].grade < school[index + 1].grade) swap(school[index], school[index + 1]);
		if(school[index].grade == school[index + 1].grade)
			if(school[index].ID > school[index + 1].ID) swap(school[index], school[index + 1]);

		index++;
	}

	double MAX = school[0].grade;

	for(int i = 0; i < size; i++)
		if(school[i].grade == MAX) cout << (school+i)->ID << " " << (school+i)->surname << " " << (school+i)->grade << endl;

	delete []school;

	return 0;
}