#include <iostream>
#include <string>

using namespace std;

int month_to_days(int,int);
int leap_years(int y);

int main() {
	int day, month, year, days;
	string Date;
	
	getline(cin,Date);
	
	day = (Date.at(0)-'0')*10+Date.at(1)-'0';
	month = (Date.at(2)-'0')*10+Date.at(3)-'0';
	year = (Date.at(4)-'0')*1000+(Date.at(5)-'0')*100+(Date.at(6)-'0')*10+Date.at(7)-'0';
	days = (year-1)*365+leap_years(year);
	days += month_to_days(month-1,year);
	days += day;
	cout << days <<endl;
	cin.get();
	
	return 0;
}

int leap_years(int y){
	int ly = 0;

	for(int i=1;i<y;i++)
		if(i%4==0&&i%100!=0||i%400==0) ++ly;
		
	return ly;
}

int month_to_days(int m, int y){
	int day = 0;

	for(int i=1;i<=m;i++){
		if((i==2)&&(y%4==0&&y%100!=0||y%400==0)) day += 29;
		else if(i==2) day += 28;
		else if(i < 8 ? i % 2 : !( i % 2)) day += 31;
		else day += 30;
	}

	return day;
}