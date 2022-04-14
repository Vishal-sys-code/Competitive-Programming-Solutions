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
	int normal_array = 0, reversed_array = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		normal_array = arr[i];
	}
	for (int i = n - 1; i >= 0 ; i--) {
		reversed_array = arr[i];
	}
	if (normal_array == reversed_array) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}