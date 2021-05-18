#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		// count the frequency of odd numbers
		cnt += (x & 1);
	}
	// find the minimum between 'cnt' (odd numbers) 
	// and ('n' - 'cnt') (even numbers) to get the
	// minimum number of coins needed
	cout << min(cnt, n - cnt) << '\n';
	return 0;
}
