/*
author: tmleyncodes
codeforces round 806 Div.4 problem C
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
unordered_map<char, int> mp;



int bupper(int a) {
    int ans;
    ans = a + 1;
    ans = ans % 10;
    return ans;
}

int bdown(int a) {
    int ans;
    ans = a - 1;
    ans = a + 10;
    ans = ans % 10;
    return ans;
}


void solve() {
    vector<int> v;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.pb(x);
    }
    for (int i = 0; i < n; i++) {
        int y; cin >> y; //length of the string in the cypher
        string s; cin >> s;
        for (int j = 0; j < y; j++) {
            if (s[j] == 'U') {
                if (v[i] == 0) {
                    v[i] = 9; // update to 9 if wrong
                }
                else {
                    v[i] -= 1; //updating the vector
                }
            }
            else if (s[j] == 'D') {
                v[i] = (v[i] + 1) % 10; // modulo to save the cuurent vector
            }
        }
    }
    for (auto &i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    // v.clear();
    return 0;
}
