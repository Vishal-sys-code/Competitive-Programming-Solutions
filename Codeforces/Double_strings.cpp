#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
unordered_map<char, int> mp;
#define lpr pair<long long int,long long int>
 
#define S second
#define F first
// #define ll long long int
 
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
 
bool comparefn(lpr a, lpr b)
{
    if (a.S != b.S)
        return a.F <= b.F;
    return false;
}
 
void solve() {
    int n; cin >> n;
    string arr[n];
    map<string, int> m1;
    set<string> s;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
        m1[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        bool f = 0;
        string ans, res;
        for (int j = 0; j < arr[i].size(); j++) {
            res.clear();
            ans += arr[i][j];
            for (int k = j + 1; k < arr[i].size(); k++) {
                res.pb(arr[i][k]);
            }
            if (s.find(ans) != s.end() and s.find(res) != s.end()) {
                f = 1;
                break;
            }
        }
        if (f) {
            cout << "1";
        }
        else {
            cout << "0";
        }
    }
    cout << endl;
}
 
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t; cin >> t;
    while (t--) {
        solve();
    }
    // v.clear();
    return 0;
}