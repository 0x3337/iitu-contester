#include <iostream>
#include <algorithm>
#include <cstring>
 
using namespace std;

string str;
int size, maximum, x = 0, y;

string func(string str2, int times);
int factorial(int n);

int main() {
	int times, x;

	cin >> str;

	size = str.size();
	times = factorial(size);
	maximum = size - 1;

	if(size < 8) func(str, times);
	else {
		for(int c = 0; c < 10; c++)
			func(str, times/10);
	}

	return 0;
}

string func(string str2, int times) {
	if(times > 0) {
		if(x == maximum) x = 0;

		swap(str[x], str[maximum]);

		x++;
		times--;

		cout << func(str, times) << endl;
	}
	else return str;

	return str2;
}

int factorial(int n) {
	return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}