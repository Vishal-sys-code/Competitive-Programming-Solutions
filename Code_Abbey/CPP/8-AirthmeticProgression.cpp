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
        int a, b, n;
        cin >> a >> b >> n;
        //series = a+(a+B)+..(a+(n-1)b)
        ll sum_of_a = a * (n - 1);
        ll sum_of_N_series = ((n - 1) * (n) / 2);
        ll sum_of_b_series = b * (sum_of_N_series);
        ll total_sum = (sum_of_a) + (sum_of_b_series);
        cout << ((total_sum) + a) << endl;
    }
    return 0;
}