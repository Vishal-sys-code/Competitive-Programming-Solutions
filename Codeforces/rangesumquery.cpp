#include <bits/stdc++.h>
using namespace std;
#define ll long long

void set_IO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	set_IO();
	int n, q; cin >> n >> q;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	while (q--) {
		int l, r;
		cin >> l >> r;
		for (int i = l; i <= r; i++) {
			sum += arr[i];
		}
		cout << sum << endl;
	}
	// cout << sum << endl;
}