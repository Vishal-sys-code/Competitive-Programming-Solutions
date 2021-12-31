#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, k; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> k; //kth element to be checked
	int low = 0;
	int high = n - 1; //here n is the size of the array
	sort(arr, arr + n);
	cout << arr[k - 1] << endl;

	return 0;
}