#include <bits/stdc++.h>

using namespace std;

int main() {
	int num;
	cin >> num;
	
	if (num == 1) {
		cout << "1 ";
		return 0;
	}
	if (num == 4) {
		cout << "2 4 1 3 ";
		return 0;
	}
	if (num == 5) {
		cout << "2 4 1 3 5 ";
		return 0;
	}
	if (num < 5) {
		cout << "NO SOLUTION";
		return 0;
	}
	if (num % 2 == 0) {
		int i = 1;
		int end = num + 1;
		for (int h = num/2 + 1; h != end; h++) {
			cout << i << ' ' << h << ' ';
			i++;
		}
	}
	else {
		int i = 2;
		int end = num + 1;
		for (int h = num/2 + 2; h != end; h++) {
			cout << i << ' ' << h << ' ';
			i++;
		}
		cout << 1 << ' ';
	}
	return 0;
}

