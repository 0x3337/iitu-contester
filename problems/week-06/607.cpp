#include <iostream>
#include <algorithm>

using namespace std;

int getSign(int sizeN, int sizeM) {
	int i, n, l, m = 1;

	int **matA = new int* [sizeN];
		for (int count = 0; count < sizeN; count++)
		matA[count] = new int[sizeM];

	int* id = new int[sizeN];

	for(i = 0; i < sizeN; i++) {
		id[i] = 0;

		for(n = 0; n < sizeM; n++) {
			cin >> matA[i][n];
			if(matA[i][n] > 0) id[i]++;
		}
	}

	l = *max_element(id, id + sizeN);

	for(i = 0; i < sizeN; i++) {
		if(id[i] == l) n = i;
		if(i > 0){
			if(id[i] == id[i - 1]) m++;
		}
	}

	if (m == sizeN) cout << "Numbers are equal";
	else cout << n + 1;
	return 0;
}

int main() {
	int sizeN, sizeM;

	cin >> sizeN >> sizeM;

	getSign(sizeN, sizeM);

	return 0;
}