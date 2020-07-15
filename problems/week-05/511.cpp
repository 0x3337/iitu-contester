#include <iostream>

using namespace std;

int main() {
	char tom[4] = "Tom", mary[5] = "Mary", jon[4] = "Jon", rachel[7] = "Rachel", sherry[7] = "Sherry";
	char x[32];

	cin >> x;

	if(!strcmp(tom, x)) cout << "555-3322";
	else {
		if(!strcmp(mary, x)) cout << "555-8976";
		else {
			if(!strcmp(jon, x)) cout << "555-1037";
			else {
				if(!strcmp(rachel, x)) cout << "555-1400";
				else {
					if(!strcmp(sherry, x)) cout << "555-8873";
					else cout << "Not found";
				}
			}
		}
	}

	return 0;
}