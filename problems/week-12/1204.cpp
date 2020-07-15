#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, str2;
    cin >> str >> str2;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    cout << strcmp(str.c_str(), str2.c_str());
    return 0;
}