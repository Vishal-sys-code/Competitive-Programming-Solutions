#include <bits/stdc++.h>
using namespace std;

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
	int t; cin >> t;
	while (t--) {
		int l, r; cin >> l >> r;
		if (2 * l > r) {
			cout << "-1 -1" << endl;
		}
		else {
			cout << l << " " << 2 * l << endl;
		}
	}
	return 0;
}