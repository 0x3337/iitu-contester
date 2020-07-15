#include <iostream>

using namespace std;

struct UNT {
	int ID;
	char *Name;
    char *Surname;
    int Subject;
    char *SpecialCase;
};

void sortFunction(struct UNT *studentList, int N, int M);

int main() {
	int sizeN, sizeM;

	cin >> sizeN >> sizeM;
	UNT *studentList = new UNT[sizeN];

	for(int i = 0; i < sizeN; i++) {
		cin >> (studentList+i)->ID;

		(studentList+i)->Name = new char[32];
		(studentList+i)->Surname = new char[32];
		cin >> (studentList+i)->Name >> (studentList+i)->Surname;

		int s1, s2, s3, s4;
		cin >> s1 >> s2 >> s3 >> s4;

		(studentList+i)->Subject = s1 + s2 + s3 + s4;

		(studentList+i)->SpecialCase = new char[4];
		cin >> (studentList+i)->SpecialCase;
	}

	sortFunction(studentList, sizeN, sizeM);

	for (int i = 0; i < sizeM; i++)
		cout << studentList[i].ID << " " << studentList[i].Name << " " << studentList[i].Surname << " " << studentList[i].Subject << endl;

	for(int i = 0; i < sizeN; i++) {
		delete [](studentList+i)->Name;
		delete [](studentList+i)->Surname;
		delete [](studentList+i)->SpecialCase;
	}

	delete []studentList;

	return 0;
}

void sortFunction(struct UNT *studentList, int N, int M) {
	int index = 0;
	char x[4] = "YES";

	for (int i = 0; i < N; i++)
		if(!strcmp(studentList[i].SpecialCase, x)) {swap(studentList[index], studentList[i]); index++;}

	for(int i = index; i < N; i++) {
		for(int j = index; j < N; j++) {
			if(studentList[i].Subject >= studentList[j].Subject) swap(studentList[j], studentList[i]);
		}
	}

	for(int i = 0; i < M; i++) {
		for(int j = 0; j < M; j++) {
			if(studentList[i].Subject >= studentList[j].Subject) swap(studentList[j], studentList[i]);
		}
	}
}