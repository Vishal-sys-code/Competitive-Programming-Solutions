#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll temp = 1;
        while (temp * 10 <= n) {
            temp *= 10;
        }
        cout << (n - temp) << endl;
    }
    return 0;
}
