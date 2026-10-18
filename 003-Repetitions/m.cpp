#include <bits/stdc++.h>

using namespace std;

int main() {
	char c;
	int max_len;
	int curr_len = 1;
	char last;
	cin >> c;
	last = c;
	while (cin >> c) {
		if (last == c) {
			curr_len++;
		}
		else {
			max_len = max(max_len, curr_len);
			curr_len = 1;
		}
		last = c;
	}
	max_len = max(max_len, curr_len);
	cout << max_len;
	return 0;
}
