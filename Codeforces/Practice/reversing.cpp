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
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 0 ; i--) {
		cout << arr[i] << " ";
	}
	return 0;
}