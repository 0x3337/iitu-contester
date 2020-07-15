// WARNING! This code breaks the contester

#include <iostream>
#include <cstring>

using namespace std;

void mostRecent(char *text) {
    int size = strlen(text);
    char *extra = new char[size];

    char *ptPtr = strtok(text, " !?,.-1234567890");
    while(ptPtr != NULL) {
        strcat(extra, ptPtr);
        strcat(extra, " ");
        ptPtr = strtok(NULL, " !?,.-1234567890");
    }

    strcpy(text, extra);

    size = 1;
    for(int i = 0; i < 1000; i++)
        if(text[i] == ' ') size++;
 
    string *data = new string[size];
 
    char *pch = strtok(text, " ");
    int index = 0;
    while(pch != NULL) {
        data[index] = pch;
        pch = strtok(NULL, " ");
        index++;
    }

    string word;
    int nCout = 0, MAX = 0;
    for(int i = 0; i < size; i++) {
        nCout = 0;

        for(int j = 0; j < size; j++)
            if(data[i] == data[j]) nCout++;

        if(nCout > MAX) {
            MAX = nCout;
            word = data[i];
        }
    }

    cout << word << endl;
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