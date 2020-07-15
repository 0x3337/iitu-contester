#include <iostream>
#include <algorithm>

int n, m, line = 0, dont = 0, io = 1;

using namespace std;

int func(int n, int m) {
	int *big = new int(n);
	int *big2 = new int(n);

	int **arr = new int* [n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}  

	for (int i = 0; i < n; i++) {
		big[i] = 0;
		big2[i] = 0;

		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
		
		big2[i] = *adjacent_find(arr[i], arr[i] + m);
		big[i] = count(arr[i], arr[i] + m, big2[i]);

		line = *max_element(big, big + n);

		if(line != 1)
			for (int j = 0; j < n; j++)
				if(big[j] == line) {line = j; break;}
		
	}

	if(line != 0) cout << "Longest series is in the string " << line << endl; 
	else cout << "No series of equal elements"; 

	return 0;
}

int main() { 
	cin >> n >> m;

	func(n, m); 

	return 0; 
}