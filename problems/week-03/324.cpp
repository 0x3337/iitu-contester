#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double n, i;

    cin >> n;
    n = 0;

    for (i = 1; i <= 50; i++)
        n = n + (1 / (pow(i, 3)));

    cout << n;

    return 0;
}