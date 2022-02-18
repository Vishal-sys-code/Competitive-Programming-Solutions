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

/*
Expected Time Complexity:- O(N^2)
Expexted Space Complexity:- O(1) => no extra space
*/


class Solution {
public:
	void multiply(int x, vector<int>&multiplicand) {
		int carry = 0;
		vector<int>::iterator i;

		for (i = multiplicand.begin(); i != multiplicand.end(); i++) {
			int prod = (*i) * x + carry;
			*i = prod % 10;
			carry  = prod / 10;
		}

		while (carry) {
			multiplicand.push_back(carry % 10);
			carry = carry / 10;
		}
	}
	vector<int> factorial(int N) {
		//code here
		vector<int> ans;
		ans.push_back(1);
		vector<int> :: iterator it;
		for (int i = 2; i <= n; i++) {
			multiply(i, ans);
		}
		reverse(ans.begin(), ans.end());
		for (int it = ans.begin(); it != ans.end(); ++it) {
			cout << *it;
		}
	}
};


int main() {
	set_IO();
	int T; cin >> T;
	while (T--) {
		int n; cin >> n;
		Solution ob;
		vector<int> result = ob.factorial(n);
		for (int i = 0; i < result.size(); ++i) {
			cout << result[i];
		}
		cout << endl;
	}
	return 0;
}
