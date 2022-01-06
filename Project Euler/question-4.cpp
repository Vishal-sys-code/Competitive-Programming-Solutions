#include <bits/stdc++.h>
using namespace std;
#define ll long long

void FastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

void setIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int isPalindrome(int num) {
	int rev = 0;
	while (num > 0) {
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	return rev;
}

void solve() {
	int ans = 0;
	for (int i = 100; i <= 999; i++) {
		for (int j = 100; j <= 999; j++) {
			int p = i * j;
			if (p == isPalindrome(p) and p > ans) {
				ans = i * j;
			}
		}
	}
	cout << ans << endl;
}

int main() {
	setIO();
	FastIO();

	// int T; cin>>T;
	// while(T--){
	// 	solve();
	// }

	solve();
}