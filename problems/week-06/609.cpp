#include <iostream>
#include <cstring>

using namespace std;

const int maxn = 200;
int y = 0, c[100];

int countAccurance(char arr[100][maxn], char* ch);

int main() {
	char arr[100][maxn], ch[100];

	cin >> ch[0] >> ch[1];
	cin >> arr[0] >> arr[1];

		countAccurance(arr, ch);

	for(int i = 0; i < 2; i++)
		cout << c[i] << " " << ch[i] << " characters in " << arr[i] << endl;

	return 0;
}

int countAccurance(char arr[100][maxn], char* ch) {
	while(y < 2) {
		int z;
		c[y] = 0;
		z = strlen(arr[y]);

		for(int i = 0; i < z; i++)
			if(arr[y][i] == ch[y]) c[y]++;

		y++;
	}

	return 0;
}