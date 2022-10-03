/*
Author: tmleyncodes

नैनं छिद्रन्ति शस्त्राणि नैनं दहति पावक: ।
न चैनं क्लेदयन्त्यापो न शोषयति मारुत ॥
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
unordered_map<char, int> mp;
#define lpr pair<long long int,long long int>
#define mod 1000000007
#define S second
#define F first
#define nl endl
const long long A = 100000000000000LL, N = 228228;

// INPUTS
#define read1(a) cin>>a
#define read2(a,b) cin>>a>>b
#define read3(a,b,c) cin>>a>>b>>c

// OUTPUTS
#define print1(a) cout<<a
#define print2(a,b) cout<<a<<b
#define print3(a,b,c) cout<<a<<b<<c

#define rep(i, n)  for (int i = 0; i < n; ++i)
#define rep1(i, p)  for (int i = 0; i < 26; ++i)


// For the fast input and outputs in cpp
void Fast_IO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int ishanvi(vector<int> &pos, int j) {
    int cnt = 0;
    int p = j;
    while (p != -1) {
        ++cnt;
        p = pos[p];
        if (p == j) return cnt;
    }
    return -1;
}

// driver code for my contests
void solution() {
    /*
    SOLUTION - A
    --------------
    ll n; read1(n);
    cout << (n / 3) - 2 << nl;
    */

    /*

    SOLUTION - B
    ----------------
    ll n, cnt = 0; read1(n);
    vector<int> arr(n);
    vector<int> ans;
    priority_queue<int> pqe;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pqe.push(arr[i]);
    }
    sort(arr.begin(), arr.end());
    ll minE = arr[0];
    ans.push_back(minE);
    ll res = (2 * minE);
    for (int i = 1; i < n; i++) {
        if (arr[i] >= res) {
            cnt += ((arr[i] + (res - 2) ) / (res - 1)) - 1;
        }
    }
    cout << cnt << nl;
    */
    /*SOLUTION C*/
    /*ll n, z; read1(n);
    string s; cin >> s;
    vector<int> ans(26, 0);
    char fa;
    int arr[26];
    rep1(i, p) ans[i] = -1, arr[i] = 1;
    rep(i, n) {
        if (ans[s[i] - 'a'] == -1)  {
            for (int j = 0; j < 26; j++) {
                if (arr[j] != 0 and j != s[i] - 'a') {
                    ans[s[i] - 'a'] = j;
                    z = ishanvi(ans, j);
                    if (z != -1 and z != 26) continue;
                    else {
                        arr[j] = 0;
                        break;
                    }
                }
            }
        }
        fa = char(ans[s[i] - 'a'] + 'a');
        cout << fa;
    }
    cout << nl;
    */
    /*
     string s;
     cin >> s;
     int n = s.length();
     int dp[n + 1][n + 1];
     for (int i = 0; i <= n; i++)
     {
         dp[i][0] = 0;
         dp[0][i] = 0;
     }
     dp[0][0] = 1;
     for (int i = 1; i <= n; i++)
     {
         if (s[i - 1] == '1')
             dp[i][0] = dp[i - 1][0];
         else
             dp[i][0] = 0;
     }
     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= n; j++)
         {
             if (s[i - 1] == '1')
                 dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
             else
                 dp[i][j] = dp[i - 1][j];
         }
     }
     int cnt = 0;
     for (int i = 0; i <= n; i++)
     {
         if (dp[n][i] != 0)
             cnt++;
     }
     cout << cnt;
     */
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Fast_IO();
    // int tt = 1; // for 1 test case
    int tt; read1(tt);
    while (tt--) {
        solution();
    }
    return 0;
}