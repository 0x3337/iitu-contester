#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int size, i, n;

	cin >> size;
	int x[size];

	if(size >= 1 && size <= 1000) {

		for(i = 0; i <= (size - 1); i++)
			cin >> x[i];

		n = size - 1;

		while(n >= 0) {
			for(i = (size - 1); i >= 0; i--)
				if (x[n] >= x[i]) swap(x[i], x[n]);
		}
		
		i = (size - 1);
		n--;
	}

	for(i = 0; i <= (size - 1); i++)
		cout << x[i] << " ";
	
	return 0;
}