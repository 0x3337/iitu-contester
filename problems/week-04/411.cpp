#include <iostream>
 
using namespace std;
 
bool a[1000090];
 
int main() {  
	int x;

	a[0]=true;
	a[1]=true;

	cin >> x;
 
	for(long long i=2; i <= x; ++i) {
		if(a[i] == false) {
			if(i*i <= x) {
				for(long long j=i*i; j <= x; j+=i)
					a[j]=true;
			}
		}
	}
 
	for(long long i = 1; i <= x; ++i)
		if(a[i] == false) cout << i << " ";

	return 0;
}