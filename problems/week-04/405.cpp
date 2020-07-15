#include <iostream>

using namespace std;

int main() {
	int size, i, max = (-2147483648), times = 0;

	cin >> size;
	int x[size];

	if(size >= 1 && size <= 1000) {

		for(i = 0; i <= (size - 1); i++)
			cin >> x[i];

		for(i = (size - 1); i >= 0; i--)
			if (x[i] >= max) max = x[i];

		for(i = (size - 1); i >= 0; i--)
			if (x[i] == max) times++;

		cout << times;
	}
	return 0;
}