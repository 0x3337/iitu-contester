#include <iostream>
#include <cstring>

using namespace std;

const int maxn = 200;
int x, y = 0, c[100];

int countAccurance(char arr[100][maxn], char* ch);

int main() {
	char arr[100][maxn], ch[100];

	cin >> x;

	for (int i = 0; i < x; i++) {
		cin >> ch[i] >> arr[i];
	}

	countAccurance(arr, ch);

	for(int i = x - 1; i >= 0; i--)
		cout << c[i] << " " << ch[i] << " in " << arr[i] << endl;

	return 0;
}

int countAccurance(char arr[100][maxn], char* ch) {
	while(y < x) {
		int z;
		c[y] = 0;
		z = strlen(arr[y]);

		for(int i = 0; i < z; i++)
			if(arr[y][i] == ch[y]) c[y]++;

		y++;
	}

	return 0;
}