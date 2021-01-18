#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x, y;
	cin >> x >> y;
	cout << (abs(x - y) < 3 ? "Yes" : "No") << '\n';
	return 0; 
}
