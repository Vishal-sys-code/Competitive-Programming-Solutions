/*
* author:- totka_wale_baba aka runtimegeek wala
  time and date:- chto ty budesh' delat', Yan Kar
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int N = 1e4;
//d=[1,7], x,y,z=[1,18]
void solve(){
	ll a,b,c;
	cin>>a>>b>>c;
	ll sum = a+b+c;
	ll ans = 3-sum;
	if(ans>0 and sum>0) cout<<"1"<<endl;
	else cout<<"0"<<endl;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//solve();
	int t;cin>>t;
	for(int i=0;i<t;++i){
		//cout<<"Case #: "<<"t"<<solve()<<endl;
		solve();
	}
	return 0;
}
