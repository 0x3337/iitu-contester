#include <iostream>

using namespace std;

int htos(int h, int m, int s) {
	s = (h * 60 + m) * 60 + s;

	return s;
}

int main() {
	int h1, m1, s1, h2, m2, s2;

	cin >> h1 >> m1 >> s1;
	cin >> h2 >> m2 >> s2;

	s1 = htos(h1, m1, s1);
	s2 = htos(h2, m2, s2);

	s1 = s2 - s1;

	h1 = s1 / 3600;
	s1 = s1 - h1 * 3600;
	m1 = s1 / 60;
	s1 = s1 - m1 * 60;

	cout << (h1 < 10 ? "0" : "") << h1 << ":" << (m1 < 10 ? "0" : "") << m1 << ":" << (s1 < 10 ? "0" : "") << s1;

	return 0;
}