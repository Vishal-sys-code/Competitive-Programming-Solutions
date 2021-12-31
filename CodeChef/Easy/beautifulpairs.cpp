#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define send ios_base::sync_with_stdio(false)
#define help cin.tie(0), cout.tie(0)
#define mii map<int,int>
#define endl "\n"

/*
void solve(){
	ll n; cin>>n;
	double arr[n];
	ll ans=0;
	for(int i=0;i<n;++i) cin>>arr[i];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(i==j) continue;
			ll temp = arr[i]-arr[j];
			if(temp/arr[i] < temp/arr[j]) ans++;
		}
	}
	cout<<ans<<endl;
}
*/
//WE can also do by using STL map by [N-Frequency of that element] update by answer i.e. answer+=N-[freq of array elements]
void solve(){
	ll n; cin>>n;
	int a[n];
	for(int i=0;i<n;++i) cin>>a[i];
	ll ans=0;
	mii m;
	for(int i=0;i<n;++i) m[a[i]]++;
	for(int i=0;i<n;++i) ans+=(n-(m[a[i]]));
	cout<<ans<<endl;
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
