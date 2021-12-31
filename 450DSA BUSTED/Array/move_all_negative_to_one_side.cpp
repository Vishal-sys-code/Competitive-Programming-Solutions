#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void moving_one_side(int arr[], int n) {
	int j = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			if (i != j) {
				swap(arr[i], arr[j]);
			}
			j++;
		}
	}
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int arr[n] = { -1, 2, -3, 4, 5, 6, -7, 8, 9};
	// for (int i = 0; i < n; i++) {
	// 	cin >> arr[i];
	// }
	// cout << moving_one_side(arr, n) << endl;
	moving_one_side(arr, n);
	for (int i = 0; i < n; i++) {
		// cout << arr[i] << " ";
		printf("%d ", arr[i]);
	}
	cout << endl;
}