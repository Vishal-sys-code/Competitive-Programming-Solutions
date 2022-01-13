#include <bits/stdc++.h>
using namespace std;
#define ll 		long long
#define nline 	"\n"
#define inp(a,b) cin>>a>>b

void set_IO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

/*
Here we will check for each array element is less than that of K then
we will formulize the maximum and minimum element.

answer = array[N-1] - array[0];   ===> getting initialize the answer by subtracting the maximum and minimum element in the initial array.

maximumElement = max(array[index-1]+k, array[N-1]-k);   ===> Maximum element in the array
minimumElement = min(array[0]+k, array[index]-k); 		===> Minimum element in the array
answer = min(answer,(maximumElement - minimumElement));   ===> Comparing the initial answer with the new updated array difference of the maximum and minimum element in the array.
*/

class Solution {
public:
	int getMinDiff(int arr[], int n, int k) {
		sort(arr, arr + n);
		int maxE, minE;
		int ans = arr[n - 1] - arr[0];
		for (int i = 1; i < n; i++) {
			if (k <= arr[i]) {
				maxE = max(arr[i - 1] + k, arr[n - 1] - k);
				minE = min(arr[0] + k, arr[i] - k);
				ans  = min(ans, (maxE - minE));
			}
		}
		return ans;
	}
};

int main() {
	set_IO();
	int T; cin >> T;
	while (T--) {
		int n, k; cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		Solution ob;
		auto ans = ob.getMinDiff(arr, n, k);
		cout << ans << nline;
	}
	return 0;
}