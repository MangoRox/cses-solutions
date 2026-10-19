#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	// get first num
	int n;
	cin >> n;
 
	// calc sum in o/1
	long long sum = (n*(n+1LL))/2;
	long long input_sum = 0LL;
	while (cin >> n) {
		input_sum += n;
	}
	cout << sum - input_sum << endl;
	
	return 0;
}
