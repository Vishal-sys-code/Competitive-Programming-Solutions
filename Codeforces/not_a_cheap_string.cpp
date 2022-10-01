#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solve() {
    string s; cin >> s;
    ll n; cin >> n;
    string a = s;
    sort(a.begin(), a.end());
    map<char, int> mp;
    vector<ll> v;
    for (int i = 0; i < s.size(); i++) {
        v.push_back(a[i] - 'a' + 1);
        mp[a[i]]++;
    }
    ll sum = accumulate(v.begin(), v.end(), 0LL);
    int i = v.size() - 1;
    while (sum > n) {
        sum -= v[i];
        mp[a[i]]--;
        i--;
    }
    for (int i = 0; i < s.size(); i++) {
        if (mp[s[i]] > 0) {
            cout << s[i];
            mp[s[i]]--;
        }
    }
    cout << endl;
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
