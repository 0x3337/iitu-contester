#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int i, n, m, l, k;

	cin >> m >> n;

	k = n - 1;

	int x[m];

	for(i = 0; i < m; i++)
		x[i] = i + 1;

	if(n == 1) cout << m;
	else {
		if(m == 2) {
			l = n % 2;
			cout << (l == 0 ? "1" : "2");
		}
		else {
			while(x[1] < 21474) {
				l = 0;

				for (i = k; i < m; i += n) {
					x[i] = 21474;
					l++;
				}

				k = i - m;
				sort(x, x + m);
				m = m - l;
			}

			cout << x[0];
		}
	}

	return 0;
}