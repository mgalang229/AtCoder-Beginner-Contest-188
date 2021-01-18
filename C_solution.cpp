#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(1 << n);
	for (int i = 0; i < (1 << n); i++) {
		cin >> a[i];
	}
	// create a 'remaining' vector with size 1 << n with indexes as its values
	vector<int> remaining(1 << n);
	iota(remaining.begin(), remaining.end(), 0);
	for (int i = 1; i <= n; i++) {
		// create a vector for getting the indexes of the winners in every existing pair
		vector<int> next_remaining;
		for (int j = 0; j < 1 << (n - i); j++) {
			// check if the current element is greater than the next element
			// a[j * 2] is used to skip elements in multiples of 2
			// + 1 is also used to compare it to its next element
			if (a[remaining[j * 2]] > a[remaining[j * 2 + 1]]) {
				// if the current element is greater then store its index in the next_remaining vector from the remaining vector
				next_remaining.emplace_back(remaining[j * 2]);
			} else {
				// otherwise, store the index of the next element in the next_remaining vector from the remaining vector
				next_remaining.emplace_back(remaining[j * 2 + 1]);
			}
		}
		// check if 'i' is already in the last elemment
		if (i == n) {
			// check if the 1st index in the remaining block is equal to the 1st index index of the next_remaining block (final winner)
			// if it's equal then the second place goes to the 1-th index (second competitor)
			// otherwise, the second place goes to the 0-th index (first competitor)
			cout << 1 + (remaining[0] == next_remaining[0] ? remaining[1] : remaining[0]) << '\n';
			return 0;
		}
		// update the set of winners from the previous block
		remaining = next_remaining;
	}
	return 0; 
}
