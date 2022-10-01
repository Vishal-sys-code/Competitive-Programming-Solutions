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

bool isPalindrome(string s) {
	int low = 0;
	int high = s.length() - 1;
	while (high > low) {
		if (s[low] != s[high]) {
			return false;
			low++;
			high--;
		}
	}
	return true;
}

int main() {
	set_IO();
	string s;
	cin >> s;
	if (isPalindrome(s)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}