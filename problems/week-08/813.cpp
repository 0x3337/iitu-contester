#include <iostream>

using namespace std;

int func(int *ip, int io) {
	for(int i = 0; i < 4; i++)
		if(ip[i] < 0 || ip[i] > 255) io = 0; 

	return io;
}

int main() {
	char dot;
	int ip[4], io = 1;

	for(int i = 0; i < 4; i++) {
		cin >> ip[i];
		if(i < 3) cin >> dot;
		if(dot != '.') {io = 0; goto l;}
	}

	io = func(ip, io);

	l:

	cout << io;

	return 0;
}