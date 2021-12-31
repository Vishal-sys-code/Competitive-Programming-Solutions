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
        ll a, b;
        cin >> a >> b;
        if (a < b) {
            cout << a << " ";
        }
        else {
            cout << b << " ";
        }
        cout << endl;
    }
    return 0;
}