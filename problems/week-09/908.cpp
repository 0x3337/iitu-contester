#include <iostream>

using namespace std;

char str[1000];

void addVeryLongIntegers(char *a, char *b, char *c);
void convert(char *min, int size);

void addVeryLongIntegers(char *a, char *b, char *c) {
	int x = 0, y = 0;
	int sizeA = strlen(a), sizeB = strlen(b), sizeC = strlen(c);
	int posA = sizeA - 1, posB = sizeB - 1, posC = sizeC - 1;

	while(posA >= 0 || posB >= 0) {
		x = int(a[posA]) + int(b[posB]) - 48;

		if(x == 57 && y == 1) {
			c[posC] = '0';
			y = 1;
		}
		else {
			if(x > 57) {
				x -= 10;
				c[posC] = char(x + y);
				y = 1;
			}
			else {
				c[posC] = char(x + y);
				y = 0;
			}
		}

		posA--;
		posB--;
		posC--;
	}

	cout << (y == 1 ? "1" : "") << c;
}

void convert(char *min, int size) {
	int posMin = strlen(min) - 1;

	for (int i = size - 1; i >= 0; i--) {
		if(posMin >= 0) {str[i] = min[posMin]; posMin--;}
		else str[i] = '0';
	}
}

int main() {
	char x[1000], y[1000], z[1000];

	cin >> x >> y;

	int sizeA = strlen(x), sizeB = strlen(y);

	if(sizeA > sizeB) {strcpy(z, x); convert(y, sizeA); addVeryLongIntegers(x, str, z);}
	else {strcpy(z, y); convert(x, sizeB); addVeryLongIntegers(str, y, z);}

	return 0;
}