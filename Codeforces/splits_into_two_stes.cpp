#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll N, T;
ll cnt = 0;

void dfs(map<ll, set<ll>> & adj, ll u, ll parent, vector<bool> & vis) {
    if (vis[u]) return;
    vis[u] = true;
    cnt++;
    for (auto it = adj[u].begin(); it != adj[u].end(); it++) {
        if (*it == parent) {
            continue;
        }
        if (vis[*it]) {
            continue;
        }
        dfs(adj, *it, u, vis);
    }
}

void solve() {
    cin >> N;
    map<ll, ll> mp;
    ll u, v;
    map<ll, set<ll>> adj;
    bool flag = true;
    for (ll i = 0; i < N; i++) {
        cin >> u >> v;
        mp[u]++;
        mp[v]++;
        if (u == v) {
            flag = false;
        }
        adj[u].insert(v);
        adj[v].insert(u);
    }
    for (auto it : mp) {
        if (it.second != 2) {
            flag = false;
            break;
        }
    }
    // if (!flag) {
    //     cout << "NO" << endl;
    //     // continue;
    // }
    vector<bool> vis(N + 1, false);
    for (ll i = 1; i <= N; i++) {
        cnt = 0;
        if (!vis[i]) {
            dfs(adj, i, -1, vis);
        }
        if (cnt % 2) {
            flag = false;
            break;
        }
    }
    if (!flag) {
        cout << "NO" << endl;
        // continue;
    }
    else {
        cout << "YES" << endl;
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
