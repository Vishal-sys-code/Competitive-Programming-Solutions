#include <bits/stdc++.h>
using namespace std;
#define ll 		long long
#define nline 	"\n"

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

*/

class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		int n = nums.size();
		int ans = 0;
		for (int i = 0; i < n; i++) {
			ans = ans ^ nums[i];
		}
		for (int i = 1; i < n; i++) {
			ans = ans ^ i;
		}
		return ans;
	}
};

int main() {
	set_IO();
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		vector<int> nums(n);
		for (int i = 0; i < n; i++) {
			cin >> nums[i];
		}
		Solution ob;
		auto ans = ob.findDuplicate(nums);
		cout << ans << nline;
	}
	return 0;
}