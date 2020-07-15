#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

void func(char *str) {
	int size = strlen(str), io = 0, times;
	double arithmeticAverage = 0, s = 0;

	times = strchr(str,'#') - str;
	str[times] = ' '; str[times + 1] = '#';
	
	char *token = strtok(str, " 0123456789,.!?-");
	while(token != NULL && strchr(token,'#') == NULL) {
		arithmeticAverage += strlen(token);
		s++;
		token = strtok(NULL, " 0123456789,.!?-");
	}

	arithmeticAverage /= s;

	cout << fixed << setprecision(9) << arithmeticAverage;
}

int main() {
	char str[1001] = "";

	cin.getline(str, 1001);

	func(str);
		
	return 0;
}