#include <iostream>

using namespace std;

int main() {
	int size, i, times = 0;
	char y[] = "A";

	cin >> size;
	char x[size];

	if(size >= 1 && size <= 1000) {

		for(i = 0; i <= (size - 1); i++)
			cin >> x[i];

		for(i = (size - 1); i >= 0; i--)
			if(x[i] == y[0]) times++;
		
		cout << times;
	}

	return 0;
}