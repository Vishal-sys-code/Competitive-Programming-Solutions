#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a < b && a < c) {
            cout << a << endl;
        }
        else if (b < a && b < c) {
            cout << b << endl;
        }
        else {
            cout << c << endl;
        }
    }
    return 0;
}
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);