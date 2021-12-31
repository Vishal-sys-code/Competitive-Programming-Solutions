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

// a= limak, b= bob

int main() {
    fast_io(); set_io();
    ll a, b;
    cin >> a >> b;
    ll count = 0;
    if (a > b) cout << 0 << endl;
    else {
        while (a <= b) {
            a *= 3;
            b *= 2;
            count++;
        }
        cout << count << endl;
    }
    // cout << count << endl;
}
