#include <iostream>

using namespace std;

int main() {
	int sizeN, sizeM, took, gave, amount;

	cin >> sizeN >> sizeM;

	int *transaction = new int[sizeN];
	for(int i = 0; i < sizeN; i++)
		transaction[i] = 0;

	for(int i = 0; i < sizeM; i++) {
		cin >> took >> gave >> amount;
		transaction[took - 1] -= amount;
		transaction[gave - 1] += amount;
	}

	for(int i = 0; i < sizeN; i++)
		cout << transaction[i] << " ";

	return 0;
}