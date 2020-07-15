#include <iostream>
 
using namespace std;

char arr[10][10];
int size, io = 0, times = 0;

int func(int x, int y) {

	if((x < size && y < size) && (x >= 0 && y >= 0)) {
		if(arr[x][y] == '.') {
			arr[x][y] = '*';
			times++;
			func(x, y + 1);
			func(x, y - 1);
			func(x + 1, y);
			func(x - 1, y);
		}
		else return 0;
	}
	else return 0;

	return func(x, y);
}
 
int main() {
	int a, b;
	cin >> size;

	for(int i = 0; i < size; i++)
		for(int n = 0; n < size; n++)
			cin >> arr[i][n];

	cin >> a >> b;

	arr[a - 1][b - 1] = '.';

	func(a - 1, b - 1);

	cout << times;

	return 0;
}