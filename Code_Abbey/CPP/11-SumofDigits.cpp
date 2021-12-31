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
        ll digit = (a * b) + c;
        //cout << digit << endl;
        ll sum = 0;
        while (digit != 0) {
            sum += digit % 10;
            digit /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}