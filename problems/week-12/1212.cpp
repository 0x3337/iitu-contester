#include <iostream>
#include <time.h>

using namespace std;

int main () {
	time_t rawtime;
	struct tm * timeinfo;
	int day;

	cin >> day;

	while(day > 365)
		day -= 365;

	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	timeinfo->tm_mon = 0;
	timeinfo->tm_mday = day;

	mktime ( timeinfo );

	cout << timeinfo->tm_mday << " " << timeinfo->tm_mon + 1;

	return 0;
}