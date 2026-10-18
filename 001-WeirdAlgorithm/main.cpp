#include <bits/stdc++.h>

using namespace std;

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin >> n;
	cout << n << ' ';
	if (n < 0 || n > 1000000) {
		return 0;
	}
	while (n != 1) {
		if (n % 2 == 1) {
			// odd
			n = n*3 + 1;
			cout << n << ' ';
		}
		else {
			n /= 2;
			cout << n << ' ';
		}
	}

	return 0;
}
