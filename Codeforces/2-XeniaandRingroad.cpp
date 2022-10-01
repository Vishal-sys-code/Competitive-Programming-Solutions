#include <bits/stdc++.h>
using namespace std;
#define ll 						long long
#define lld 					long long double
#define ull 					unsigned long long
#define pb 						push_back
#define ppb						pop_back
#define mp 						make_pair
#define nline 					"\n"
#define MOD 					10000007
#define all(x) 					begin(x),end(x)
#define sz(x) 					(int)(x).size()
#define fastio() 				ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD1 					998244353
#define INF 					1e18
#define ff 						first
#define ss 						second
#define set_bits 				__builtin_popcountll
#define pii             		pair<int,int>
#define vi              		vector<int>
#define mii             		map<int,int>
#define pqb             		priority_queue<int>
#define pqs             		priority_queue<int,vi,greater<int> >
#define ps(x,y)         		fixed<<setprecision(y)<<x
#define mk(arr,n,type)  		type *arr=new type[n];
#define w(x)            		int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(x, a) for (auto& x: a)

#ifdef tmleyncodes
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif


void tmleyncodes() {
	ll n, m; cin >> n >> m;
	ll arr[m + 10];
	ll initial_house = 1;
	ll ans = 0;
	for (ll i = 0; i < m; i++) {
		ll final_house; cin >> final_house;
		ans += ((final_house - initial_house) + n) % n;
		initial_house = final_house;
	}
	cout << ans << nline;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio();

	//VOID RETURN
	tmleyncodes();

	//INT RETURN
	// int t; cin>>t;
	// while(t--){tmleyncodes();}
}