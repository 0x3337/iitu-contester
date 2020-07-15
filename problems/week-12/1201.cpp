#include <iostream>

using namespace std;

int main() { 
	int a, b, k = 0, cnt = 0, c; 
	cin >> a >> b; 

	for(int i = 1; i <= a; i++) {
		cnt = 0;
		c = i;

		while(c) {
			cnt += c % 10; 
			c /= 10; 
		}

		if(cnt % b == 0) k++;
	} 

	cout << k; 
	return 0;
}