#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int btoc(int size, char* bit) {
	int i, x = 0;
	int* bit2 = new int[size];

	for(i = 0; i < size; i++) {
		bit2[i] = int(bit[i]) - 48;
	}

	reverse(bit2, bit2 + size);

	for(i = 0; i < size; i++) {
		if(bit2[i] == 1) x += (long double)pow((long double)2, (long double)i);
	}

	return x;
}

int main() {
	int size;
	char bit[65] = "";

	cin >> size >> bit;

	cout << btoc(size, bit);

	return 0;
}