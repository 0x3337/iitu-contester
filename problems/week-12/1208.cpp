#include <iostream>
#include <string>

using namespace std;
  
int main() {
	int flag = 0; 
	string s;
	cin>>s;

	for(int i = 0; i < s.length(); i++) {  
		if(flag == 0 && s[i] == 'h') flag = 1;  
		else if(flag == 1 && s[i] == 'e') flag = 2;  
		else if(flag == 2 && s[i] == 'l') flag = 3;  
		else if(flag == 3 && s[i] == 'l') flag = 4;  
		else if(flag == 4 && s[i] == 'o') flag = 5;  
	}

	cout << (flag == 5 ? "YES" : "NO");
	return 0;  
}