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


//logic ==> maxi = maxi - 1
//          mini = n - mini
void solve() {
	int n; cin >> n;
	int maximum_value = 0, minimum_value = 110, maximum_index = 0, minimum_index = 0;
	rep(i, 0, n) {
		int a; cin >> a;
		if (a > maximum_value) {
			maximum_value = a;
			maximum_index = i;
		}
		if (a <= minimum_value) {
			minimum_value = a;
			minimum_index = i;
		}
	}
	if (maximum_index > minimum_index) {
		cout << ((maximum_index - 1) + (n - minimum_index)) - 1;
	}
	else {
		cout << ((maximum_index - 1) + (n - minimum_index)) << endl;
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