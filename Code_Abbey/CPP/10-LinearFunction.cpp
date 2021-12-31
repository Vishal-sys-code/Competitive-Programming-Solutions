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
        ll x1, y1, x2, y2;
        ll a, b;
        cin >> x1 >> y1 >> x2 >> y2;
        //y=ax+b
        //for x1,y1
        // y1 = ax1+b and y2 = ax2+b
        ll y_part = (y1 - y2);
        ll x_part = (x1 - x2);
        a = (y_part) / (x_part);
        ll b_numerator = ((y1 * (x_part)) - (x1 * (y_part)));
        b = (b_numerator) / (x_part);
        cout << "(" << a << " " << b << ")" << endl;
    }
    return 0;
}