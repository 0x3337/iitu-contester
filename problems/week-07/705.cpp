#include <iostream>
#include <cmath>
 
using namespace std;

int arr[46656][6];
int lines, maxX, maxY, x, y, i, j = 1, k = 1, max6;

int func(int l) {
	if(l >= 0) {
		if(y >= 0) {
			if(x >= 0) {
				arr[x][y] = i;

				if(k == j) {
					if(i == 1) i = maxY;
					else i--;
					k = 1;
				}
				else k++;

				x--;
			}
			else {
				j *= maxY;
				l++;
				y--;
				x = lines - 1;
			}
		}
		l--;
		func(l);
	}

	return 0;
}

int main() {
	cin >> maxX >> maxY;

	lines = (double)pow((double)maxY, (double)maxX);

	max6 = lines * maxX;
	x = lines - 1;
	y = maxX - 1;
	i = maxY;

	if(maxY < 6) func(max6);
	else {
		for(int m = 0; m < 8; m++)
			func(max6 / 8);
	}

	for(int m = 0; m < lines; m++) {
		for(int n = 0; n < maxX; n++)
			cout << arr[m][n] << " ";
		cout << endl;
	}

	return 0;
}