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
	int n; cin >> n;
	string value;
	cin >> value;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += value[i] - '0';
	}
	cout << sum << endl;
	return 0;
}