#include <iostream>

using namespace std;
 
int main() {
	int n, i;

	cin >> n;
	int a[n];

	for (i = 0; i < n; i++)
		cin >> a[i];
 
	for (int i = 0; i < 2; i++) {
		int k = i;

		for (int j = i+1; j < n; j++)
			if (a[j] < a[k]) k = j;

		int t = a[i]; a[i] = a[k]; a[k] = t;
	}
 
	for(int i = n-1; i >= n-3; i--) {
		int k = i;
		
		for (int j = i-1; j >= 0; j--)
			if (a[j] > a[k]) k = j;

		int t = a[i]; a[i] = a[k]; a[k] = t;
	}
 
	int x = a[n-3], y = a[n-2];
 
	if (a[0] < 0 && a[n-1] > 0 && (a[0]*a[1] > a[n-2]*a[n-3])) {
		x = a[0]; y = a[1];
	}
 
	cout << x << " " << y << " " << a[n-1] << endl;
 
	return 0;
}