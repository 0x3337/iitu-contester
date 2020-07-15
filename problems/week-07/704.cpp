#include <iostream>
 
using namespace std;

int arr[100][100];
int size, value = 1, way = 0;
int minX, maxX, minY, maxY;

int func(int x, int y) {

	if(value <= size * size) {
		switch(way) {
			case 0:
				arr[x][y] = value;

				if(y == maxY) {way++; maxY--;}
				else if(y != size - 1) {value++; func(x, y + 1);}

				break;
			case 1:
				arr[x][y] = value;

				if(x == maxX) {way++; maxX--;}
				else if(x != size - 1) {value++; func(x + 1, y);}

				break;
			case 2:
				arr[x][y] = value;

				if(y == minY) {way++; minY++;}
				else if(y != 0) {value++; func(x, y - 1);}

				break;
			case 3:
				arr[x][y] = value;

				if(x == minX) {way = 0; minX++;}
				else if(x != 0) {value++; func(x - 1, y);}

				break;
		}
	}
	else return 0;

	return func(x, y);
}
 
int main() {
	cin >> size;

	if(size == 1 || size == 2) {
		cout << (size == 1 ? "1\n" : "1 2\n4 3\n");
	}
	else {
		minX = 1; maxX = size - 1; minY = 0; maxY = size - 1;

		func(0, 0);

		for(int i = 0; i < size; i++) {
			for(int n = 0; n < size; n++)
				cout << arr[i][n] << " ";
			cout << endl;
		}
	}

	return 0;
}