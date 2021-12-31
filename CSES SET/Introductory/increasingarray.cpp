#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define send ios_base::sync_with_stdio(false)
#define help cin.tie(0), cout.tie(0)
#define f first
#define s second


void solve(){
		ll n; cin>>n;
		vector<ll> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(), v.end());
		for(int i=0;i<n;i++){
			if(v.f = v.s) cout<<"0"<<endl;
		}
}

int main(){
	send;
	help;
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
