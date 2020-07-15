#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int y[2] = {-1000,1000}, size, i, n;

	cin >> size;

	int x[size];
	n = size - 1;

	for(i = 0; i <= (size - 1); i++) {
		cin >> x[i];
		if(x[i] < y[0] || x[i] > y[1]) i--;
	}

	while(n >= 0) {
		for(i = (size - 1); i >= 0; i--)
			if(x[n] >= x[i]) swap(x[i], x[n]);

		i = (size - 1);
		n--;
	}

	cout << x[0];
	return 0;
}