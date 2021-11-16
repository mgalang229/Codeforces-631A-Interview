#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	int fa = 0;
	int fb = 0;
	// apply the OR operation on from 0 to (n - 1) of both arrays
	// (OR operation = as long as 1 bit is true, the result is also true)
	for (int i = 0; i < n; i++) {
		fa |= a[i];
		fb |= b[i];
	}
	cout << fa + fb << '\n';
	return 0;
}
