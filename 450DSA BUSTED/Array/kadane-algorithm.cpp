#include <bits/stdc++.h>
using namespace std;

/*
We can solve by 3 methods(I will write the code not worry). They will be in different complexities:
1.) 3 for-loops :- 	O(N^3)
2.) 2 for-loops :- 	O(N^2)
3.) 1 for-loop  :- 	O(N) 	[This is the Kadane Algorithm]
*/

long long KadaneAlgo(int arr[], int n) {
	int curr = arr[0];
	int tillnow = arr[0];
	for (int i = 1 ; i < n ; i++) {
		curr =  max(arr[i], curr + arr[i]);
		tillnow  = max(tillnow, curr);
	}
	return tillnow;
}

void set_io() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	set_io();
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans = KadaneAlgo(arr, n);
	cout << ans << endl;
}