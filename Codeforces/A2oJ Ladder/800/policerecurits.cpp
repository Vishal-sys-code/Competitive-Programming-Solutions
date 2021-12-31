#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int x, sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		sum += x;
	}
	if (sum > 0) {
		sum--;
	}
	else if (sum == -1) {
		cout << "2" << endl;
	}
	else cout << abs(sum) << endl;
}