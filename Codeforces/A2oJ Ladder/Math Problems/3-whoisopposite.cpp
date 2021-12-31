#include <bits/stdc++.h>
using namespace std;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL); cout.tie(NULL);}
#define fix(prec) {cout << setprecision(prec) << fixed;}
#define mp make_pair
#define f first
#define s second
#define all(v) v.begin(), v.end()
#define FOR(i,a,b) for(int i=a;i<(b);i++)
#define FOR1(i,a,b) for(int i=a;i<=(b);i++)
#define nayaline "\n"
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
	ll a, b, c;
	cin >> a >> b >> c;
	ll d = abs(b - a);
	ll sum = (2 * d);
	ll result = 0;
	if (a > sum || b > sum || c > sum) {
		result = -1 ;
	}
	else {
		result = c + (sum / 2);
		if (result > sum) {
			result = c - (sum / 2);
		}
	}
	cout << result << nayaline;
}


int main() {
	send help
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t; cin >> t; //(for ==> 1≤t≤10^4)
	// ll t; cin >> t;  		//(for ==> 1≤t≤10^9)
	// int t = 1;		//(for ==> t = having no test cases)
	while (t--) {
		solve();
	}
	return 0;
}
