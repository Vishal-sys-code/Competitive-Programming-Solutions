#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fast_io() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
}

void set_io() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



int main() {
	fast_io(); set_io();
	ll n; cin >> n;
	ll count = 0;
	while (n--) {
		ll x, y, z;
		cin >> x >> y >> z;
		if (x + y + z >= 2) {
			count++;
		}
	}
	cout << count << endl;
}
