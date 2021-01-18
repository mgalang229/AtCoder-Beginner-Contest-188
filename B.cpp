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
	int sum = 0;
	// determine whether the inner product of A and B is 0
	// (a[0] * b[0]) + (a[1] * b[1]) + ... + (a[n - 1] * b[n - 1]) = 0
	for (int i = 0; i < n; i++) {
		a[i] *= b[i];
		sum += a[i];
	}
	cout << (sum == 0 ? "Yes" : "No") << '\n';
	return 0; 
}
