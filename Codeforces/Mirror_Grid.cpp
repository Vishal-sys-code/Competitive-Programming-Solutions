#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
unordered_map<char, int> mp;
#define lpr pair<long long int,long long int>

#define S second
#define F first
// #define ll long long int

int bupper(int a) {
    int ans;
    ans = a + 1;
    ans = ans % 10;
    return ans;
}

int bdown(int a) {
    int ans;
    ans = a - 1;
    ans = a + 10;
    ans = ans % 10;
    return ans;
}

bool comparefn(lpr a, lpr b)
{
    if (a.S != b.S)
        return a.F <= b.F;
    return false;
}

void solve() {
    int n; cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<pair<ll, ll>> ans;
    for (ll i = 0; i < n; i++) {
        if (v[i] < (i + 1)) {
            ans.pb(make_pair(v[i], i + 1));
        }
    }
    sort(ans.begin(), ans.end(), comparefn);
    ll res = 0;
    for (ll i = 0; i < ans.size(); i++) {
        pair<ll, ll> pa = {ans[i].second, INT_MAX};
        ll idx = upper_bound(ans.begin(), ans.end(), pa) - ans.begin();
        if (idx != ans.size()) {
            res += (ans.size() - idx);
        }
    }
    cout << res << endl;
}

void rotate(vector<vector<int>>&mat) {
    int N = mat.size();
    for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][N - 1 - i];
            mat[j][N - 1 - i] = mat[N - 1 - i][N - 1 - j];
            mat[N - 1 - i][N - 1 - j] = mat[N - 1 - j][i];
            mat[N - 1 - j][i] = temp;
        }
    }
}


void sol() {
    int n; cin >> n;
    vector<vector<int>> mat1(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < n; j++) {
            mat1[i][j] = (s[j] - '0');
        }
    }
    vector<vector<int>>mat2(mat1);
    rotate(mat2);

    vector<vector<int>>mat3(mat2);
    rotate(mat3);

    vector<vector<int>>mat4(mat3);
    rotate(mat4);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a = (mat1[i][j] == 0) + (mat2[i][j] == 0) + (mat3[i][j] == 0) + (mat4[i][j] == 0);
            int b = (mat1[i][j] == 1) + (mat2[i][j] == 1) + (mat3[i][j] == 1) + (mat4[i][j] == 1);
            cnt += min(a, b);
        }
    }
    cout << cnt / 4 << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t; cin >> t;
    while (t--) {
        // solve();
        sol();
    }
    // v.clear();
    return 0;
}
