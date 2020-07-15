#include <iostream>

using namespace std;

int main() {
	long long n, m, a;
	cin >> n >> m >> a;
	n = ((n % a) ? (1) : (0)) + n / a;
	m = ((m % a) ? (1) : (0)) + m / a;
	cout << m * n ;
}