/*
* author:- 27/08/2021
  time and date:- chto ty budesh' delat', Yan Kar
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int N = 1e4;
//d=[1,7], x,y,z=[1,18]
void solve(){
	ll d,x,y,z;
	cin>>d>>x>>y>>z;
	ll first_strategy = (7*x);
	ll second_strategy = (y*d)+(z*(7-d));
	ll ans=0;
	ans = max(first_strategy,second_strategy);
	cout<<ans<<endl;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//solve();
	int t;cin>>t;
	for(int i=0;i<t;++i){solve();}
	return 0;
}
