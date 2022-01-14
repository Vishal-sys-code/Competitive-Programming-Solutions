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

class Solution {
public:
	long long maxProduct(vector<int> arr, int n) {
		//code here
		/*We can do it in O(N^2) as a brute force solution
			algorithm:-
			----------------------
				product = 1
				for(i -> 0 to n):
					for(j -> i to n):
						product = product * array[i]
				return product
			-----------------------
		*/
		int ans = arr[0];
		int maximum_element = ans;
		int minimum_element = ans;
		for (int i = 1; i < n; i++) {
			if (arr[i] < 0) {
				swap(maximum_element, minimum_element);
			}
			maximum_element = max(arr[i], maximum_element * arr[i]);
			minimum_element = min(arr[i], minimum_element * arr[i]);
			ans = max(ans, maximum_element);
		}
		return ans;
	}
};


int main() {
	set_IO();
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		Solution ob;
		auto ans = ob.maxProduct(arr, n);
		cout << ans << endl;
	}
	return 0;
}
