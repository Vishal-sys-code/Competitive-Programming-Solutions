#include <bits/stdc++.h>
using namespace std;

void fast_io() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void set_io() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n; cin >> n;
	int a[n];
	for (int& i : a) cin >> i;
	int l = 0;
	int r = n - 1;
	int s[] = {0, 0};
	for (int i = 0; i < n; i++) {
		if (a[r] > a[l]) {
			s[i % 2] += a[r];
			r--;
		}
		else {
			s[i % 2] += a[l];
			l++;
		}
	}
	cout << s[0] << " " << s[1];
}


int main() {
	fast_io();
	set_io();

	solve(); //no test-case

	//for some test-case
	// int T; cin>>T;
	// while(T--){
	// 	solve();
	// }
}