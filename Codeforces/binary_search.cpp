#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ff first
#define ss second

void set_IO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int binarySearch(int arr[], int l, int r, int x) {
	while (l <= r) {
		int mid = (l + ((r - l) / 2));
		if (arr[mid] == x) {
			return mid;
		}
		if (arr[mid] < x) {
			l = mid + 1;
		}
		else {
			r = mid - 1;
		}
	}
	return -1;
}

signed main() {
	set_IO();
	int n, q; cin >> n >> q;
	// int X;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	while (q--) {
		int X;
		cin >> X;
		int ans = binarySearch(arr, 0, n - 1, X);
		if (ans == -1) {
			cout << "not found" << endl;
		}
		else {
			cout << "found" << endl;
		}
	}
	return 0;
}