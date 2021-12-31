#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void fast_io() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
}

void set_io() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main() {
    fast_io();
    set_io();
    ll n, h, sum;
    cin >> n >> h;
    sum = n;
    ll x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += (x > h);
    }
    cout << (sum) << endl;
}
