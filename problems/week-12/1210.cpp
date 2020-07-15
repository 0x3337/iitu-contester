#include <iostream>
#include <string>

using namespace std;

int main () {
	int END;
	string str, str2;

	getline(cin, str);
	transform(str.begin(), str.end(), str.begin(), ::tolower);

	for(int i = 0; i < str.length(); i++) 
		if(isalpha(str[i])) str2 += str[i];

	END = str2.length() - 1;
	if(str2[END] == 'a' || str2[END] == 'e' ||  str2[END] == 'i' || str2[END] == 'o' || str2[END] == 'u' || str2[END] == 'y')
		cout << "YES";
	else cout << "NO";

	return 0;
}