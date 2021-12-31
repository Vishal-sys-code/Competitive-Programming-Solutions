#include <bits/stdc++.h>
using namespace std;

void rotatebyone(int arr[], int n) {
	int x = arr[n - 1];
	for (int i = n - 1; i >= 0; --i) {
		arr[i] = arr[i - 1];
	}
	arr[0] = x;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	rotatebyone(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " " ;
	}
	cout << endl;
}