#include <bits/stdc++.h>
using namespace std;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL); cout.tie(NULL);}
#define fix(prec) {cout << setprecision(prec) << fixed;}
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define FORE(i,a,b) for(int i=a;i<=(b);i++)
#define repi(i,a,b) for(int i=a;i<(b);i++)
#define repj(j,a,b) for(int j=0;j<(i);j++)
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
const lld pi = 3.14159265358979323846;


void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	ll first = a + b * c;
	ll second = a * (b + c);
	ll third = a * b * c;
	ll fourth = (a + b) * c;
	ll fifth = (a + b + c);
	ll a1 = max(first, second);
	ll a2 = max(third, fourth);
	ll a3 = max(fourth, fifth);
	ll ans1 = max(a1, a2);
	ll ans2 = max(a2, a3);
	cout << max(ans1, ans2) << endl;
}


int main() {
	send help
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// int t; cin >> t;
	int t = 1;
	while (t--) {
		solve();
	}
	return 0;
}