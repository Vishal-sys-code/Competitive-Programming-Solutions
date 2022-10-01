#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve() {
    int n, q, a, b;
    cin >> n >> q;
    map<int, vector<int> > m;
    int p[n];
    for (ll i = 0; i < n; i++) {
        cin >> p[i];
        m[p[i]].push_back(i);
    }
    while (q--) {
        cin >> a >> b;
        if (m.find(a) == m.end() or m.find(b) == m.end()) {
            cout << "NO" << endl;
            continue;
        }
        bool x = 1;
        if (m[a].front() <= m[b].back()) {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
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
