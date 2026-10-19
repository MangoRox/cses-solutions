#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	long long prev;
	long long total_moves = 0;
	// throw away first num, we don't need to store this array
	cin >> n;
	cin >> n;
	prev = n;
	// for each num in array, if less than prev than calc diff and add to a total int
	while (cin >> n) {
		if (prev > n) {
			total_moves += prev - n;
		}
		else prev = n;
	}
	cout << total_moves;
	return 0;
}
