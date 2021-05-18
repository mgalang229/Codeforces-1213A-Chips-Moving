#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int even = 0;
	int odd = 0;
	// find the minimum between the parity of the numbers because
	// if all numbers have the same parity then all moves are free
	// however, for every different parity, we need to count it and it
	// will represent as the minimum number of coins needed to move all 
	// of these chips
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x % 2 == 0) {
			even++;
		} else {
			odd++;
		}
	}
	// the smaller value between the two values (odd or even) will serve
	// as the minimum number of coins that will be needed to move them
	cout << min(even, odd) << '\n';
	return 0;
}
