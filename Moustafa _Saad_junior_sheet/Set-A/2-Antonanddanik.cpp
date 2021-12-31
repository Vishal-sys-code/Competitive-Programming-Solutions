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

ll n;
ll count_anton = 0;
ll count_danik = 0;

int main() {
    fast_io();
    set_io();
    cin >> n;
    // vector<string> s(n);
    string temp; cin >> temp;
    for (int i = 0; i < n; i++) {
        if (temp[i] == 'A') count_anton++;
        else if (temp[i] == 'D') count_danik++;
    }
    if (count_danik > count_anton) {
        cout << "Danik";
    }
    else if (count_anton > count_danik) {
        cout << "Anton";
    }
    else {
        cout << "Friendship";
    }
}
