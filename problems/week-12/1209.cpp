#include <map> 
#include <string>
#include <iostream>

using namespace std;

int main() {
	map<string,int> myfile;
	int n; cin>>n;
	myfile.clear();

	for(int i=0;i<n;i++) {
		string s; cin>>s;
		myfile[s]++;
	}

	int max = 0;
	string ans;
	for(map<string,int>::iterator it=myfile.begin();it!=myfile.end();++it) {
		int num = it->second;
		if(max<num) {
			max=num;
			ans=it->first;
		}
	}

	cout << ans << endl;
	return 0;
}