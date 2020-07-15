#include <iostream>

using namespace std;

int func(int sizeN, int sizeM) {

    if(sizeN % 2 == 0) {

    	for(int i = 0; i < sizeN; i++) {
    		for(int n = 0; n < sizeM; n++)
    			cout << ((i + n) % 2 == 0 ? "X" : ".");
    		cout << endl;
    	}

    }
    else {

    	for(int i = 0; i < sizeN; i++) {
    		for(int n = 0; n < sizeM; n++)
    			cout << ((i + n) % 2 == 0 ? "." : "X");
    		cout << endl;
    	}

    }
	
	return 0;
}

int main() {
	int sizeN, sizeM;

	cin >> sizeN >> sizeM;

	func(sizeN, sizeM);
		
	return 0;
}