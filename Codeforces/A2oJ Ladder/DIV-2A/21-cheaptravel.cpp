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
#define rep(i,a,b) for(int i=a;i<(b);i++)
#define next "\n"
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

/*
one ride subway = a rubles
special ticket for m rides = b rubles
she need n-times to ride on subway(WOW)
find out min-sum to spend on the n rides?
Fun:- She don't know maths.
*/


void solve() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int ans = 0;
	if ((m * a) <= b) {
		ans = n * a;
	}
	else {
		ans = (n / m) * b + min((n % m) * a, b);
	}
	cout << ans << next;
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
