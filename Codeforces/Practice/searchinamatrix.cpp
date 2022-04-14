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
	int n, m; cin >> n >> m;
	// array size = n*m
	// n = ROW
	// m = COLUMN
	int array[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0 ; j < m; j++) {
			cin >> array[i][j];
		}
	}
	int x; cin >> x;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0 ; j < m; j++) {
			if (array[i][j] == x) {
				ans = 1;
				break;
			}
		}
	}
	if (ans == 1) {
		cout << "will not take number" << endl;
	}
	else {
		cout << "will take number" << endl;
	}
}