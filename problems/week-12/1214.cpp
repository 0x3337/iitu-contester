#include <string>
#include <iostream>

using namespace std;

int func(int **arr, int tableSizeN, int tableSizeM) {
	for (int j = 0; j < tableSizeN - 1; j++)
		for (int k = 0; k < tableSizeM - 1; k++)
			if(arr[j + 1][k] == arr[j][k] && arr[j][k + 1] == arr[j][k] && arr[j + 1][k + 1] == arr[j][k]) return 0;

	return 1;
}

int main() {
	int size;

	cin >> size;
	string *str = new string[size];

	for(int i = 0; i < size; i++) {
		int tableSizeN, tableSizeM;

		cin >> tableSizeN >> tableSizeM;

        int **table = new int* [tableSizeN];
        for (int count = 0; count < tableSizeN; count++)
        	table[count] = new int[tableSizeM];

        for (int j = 0; j < tableSizeN; j++)
			for (int k = 0; k < tableSizeM; k++)
				cin >> table[j][k];

		str[i] = (func(table, tableSizeN, tableSizeM) == 1 ? "YES" : "NO");

		delete [] table;
    }

    for(int i = 0; i < size; i++)
    	cout << str[i] << endl;

	return 0;
}