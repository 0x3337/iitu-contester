#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int sizeN, sizeM, i, n;

	cin >> sizeN >> sizeM;

	int x[sizeN][sizeM], y[sizeN];

	for (i = 0; i < sizeN; i++)
		for (n = 0; n < sizeM; n++)
			cin >> x[i][n];

	for (i = 0; i < sizeN; i++)
		y[i] = *min_element(x[i], x[i] + sizeM);

	i = *min_element(y, y+sizeN);

	cout << i;

	return 0;
}