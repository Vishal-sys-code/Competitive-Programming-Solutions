#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve() {
    string str; cin >> str;
    set<char> ch;
    int ans = 0;
    int len = str.length();
    for (int i = 0; i < len; i++) {
        ch.insert(str[i]);
        if (ch.size() > 3) {
            ans++;
            ch.clear();
            ch.insert(str[i]);
        }
    }
    if (ch.empty() == false) ans++;
    cout << ans << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
