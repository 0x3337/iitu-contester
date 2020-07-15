#include <iostream>
#include <cmath>

using namespace std;

int  getSign(int size) {
	int i, a = 0, b = 0;
	int* matA = new int[size];
	int* matB = new int[size];

	for(i = 0; i < size; i++) {
		cin >> matA[i];
		if(matA[i] < 0) a++;
	}
	for(i = 0; i < size; i++) {
		cin >> matB[i];
		if(matB[i] < 0) b++;
	}

	if(a < b)
		cout << "Number of positives in the first array is greater";
	else {
		if(a > b)
			cout << "Number of positives in the second array is greater";
		else
			cout << "Numbers are equal";
	}
	
	return size;
}

int main() {
	int size;

	cin >> size;

	getSign(size);

	return 0;
}