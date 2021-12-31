#include <bits/stdc++.h>
using namespace std;

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
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}