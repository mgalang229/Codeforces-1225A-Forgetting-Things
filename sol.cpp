#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b;
	cin >> a >> b;
	if (a == 9 && b == 1) {
		// if 'a' is 9, and  'b' is 1, then simply print 'a' and 'b' multiplied to 10
		cout << a << " " << b * 10;
	} else if (b - a == 1) {
		// if the difference of 'b' and 'a' is 1, then do nothing
		cout << a << " " << b;
	} else if (a == b) {
		// if 'a' and 'b' are equal, then multiply 10 to 'a' and 'b' and add 1 to 'b'
		cout << a * 10 << " " << a * 10 + 1;
	} else {
		// otherwise, print -1
		cout << -1;
	}
	cout << '\n';
	return 0;
}
