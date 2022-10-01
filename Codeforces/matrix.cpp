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
	ll n; cin >> n;
	ll dia1 = 0;
	ll dia2 = 0;
	ll arr[n][n];
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < n; j++) {
			if (i == j) {
				dia1 += arr[i][j];
			}
			if (n - 1 - j == i) {
				dia2 += arr[i][j];
			}
		}
	}
	ll ans = 0;
	// ans = abs(dia1) + abs(dia2);
	ans = abs(dia1 - dia2);
	cout << ans << endl;
}