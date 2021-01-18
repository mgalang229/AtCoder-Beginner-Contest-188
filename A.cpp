#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x, y;
	cin >> x >> y;
	// check if the difference of x and y is less than 3, this means that min(x, y) can overtake max(x, y)
	cout << (abs(x - y) < 3 ? "Yes" : "No") << '\n';
	return 0; 
}
