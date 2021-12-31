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
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); ++i) {
		if (s1[i] >= 'A' and s1[i] <= 'Z') {
			s1[i] += 32;
		}
		if (s2[i] >= 'A' and s2[i] <= 'Z') {
			s2[i] += 32;
		}
	}
	if (s1 == s2) cout << 0 << endl;
	else if (s1 < s2) cout << -1 << endl;
	else cout << 1 << endl;
}