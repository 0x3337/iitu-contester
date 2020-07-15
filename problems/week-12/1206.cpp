#include <iostream>
#include <string>

using namespace std;

int main() {
	int w;
	cin >> w;

	if(w > 2)
		cout << (w % 2 == 0 ? "YES" : "NO");
	else cout << "NO";

	return 0;
}