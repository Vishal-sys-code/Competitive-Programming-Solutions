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
	ll n, i; cin >> n;
	ll a[n];
	ll count = 0;
	for (i = 0; i < n; i++) cin >> a[i];
	sort(a, a + n);
	for (i = 0; i < n; i++) {
		if (a[i] > a[i - 1]) {
			cout << a[i];
			count = 1;
			break;
		}
	}
	if (count == 0) {
		cout << "NO";
	}
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