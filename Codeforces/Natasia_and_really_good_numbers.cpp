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


// For the fast input and outputs in cpp
void Fast_IO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// driver code for my contests
void solution() {
    ll a, b; read2(a, b);
    if (b == 1) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        ll sum = (a * b * 2);
        ll y = (sum - a);
        cout << a << " " << y << " " << sum << endl;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Fast_IO();
    // int t = 1; // for 1 test case
    int tt; read1(tt);
    while (tt--) {
        solution();
    }
    return 0;
}