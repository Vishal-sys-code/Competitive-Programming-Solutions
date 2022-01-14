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
	vector<int> factorial(int N) {
		//code here
		if (N < 0) {
			return N;
		}
		return factorial(N) * factorial(N - 1);
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
