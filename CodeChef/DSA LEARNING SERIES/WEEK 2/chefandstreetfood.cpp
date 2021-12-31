#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(i,a,b) for(ll i=a;i<b;i++)


int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll s,p,v,ans = INT_MIN;
		rep(i,0,n){
			cin >> s >> p >> v;
			s++;
			ll c = floor(p/s)*v;
			ans = max(ans,c);
		}
		cout << ans << endl;
	}
}

/*
 * s = stores that offer food of the i-th type
 * v = price of one piece of food of this type is Vi 
 * p =  people come to buy it Pi
 */
