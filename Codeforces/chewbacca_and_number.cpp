#include <bits/stdc++.h>
#define ll long long
using namespace std;

void set_IO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void tmleyncodes() {
	string s; cin >> s;
	for (int i = 0; i < s.length(); ++i) {
		int str = s[i] - 48;
		if (str > 4) {
			str = 9 - str;
		}
		if (!str and !i) {
			continue;
		}
		s[i] = str + '0';
	}
	cout << s << endl;
}


int main() {
	set_IO();

	tmleyncodes(); // normally

	// int t; cin>>t; //for the testcases

	// int t = 1; // if the testcases is equal to 1 in contest

	/*while(t--){
		tmleyncodes();
	}*/
}
