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
        int f;
        cin >> f;
        double first = f - 32;
        double second = 1.8;
        double c = (first) / (second);
        if (f <= -1) {
            cout << f << endl;
        }
        else cout << round(c) << endl;
    }
    return 0;
}