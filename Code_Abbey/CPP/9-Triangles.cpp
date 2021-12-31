#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t; cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll s = ((a + b + c) * 0.5);
        ll calc = (s) * (s - a) * (s - b) * (s - c);
        ll area = sqrt(calc);
        if (area < 0) cout << "0" << endl;
        else cout << "1" << endl;
    }
    return 0;
}