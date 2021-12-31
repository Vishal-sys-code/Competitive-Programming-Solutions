#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int E = 5;
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
	int a[6][6];
	int f, d, i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			cin >> a[i][j];
		}
	}
	for ( i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (a[i][j] == 1) {
				f = i + 1;
				d = j + 1;
			}
		}
	}
	ll ans = abs(f - 3) + abs(d - 3);
	cout << ans << endl;
}
