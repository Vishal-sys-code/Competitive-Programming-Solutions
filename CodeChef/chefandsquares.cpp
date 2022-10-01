#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO   ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define print(v)  cout<<v<<"\n";
#define E endl;
#define sq(v) ((v)*(v))
int main(){
	FIO;
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll ans = LLONG_MAX,b,x;
		for(int i=1;i*i<n;i++){
			if(n%i)  continue;
			b = n/i;
			x = (b-i)/2;
			//ll x = (b-i)%2;
			//ll y = (b+i)%2;
			if(((b-i)%2) || ((b+i)%2)) continue;
			ans = min(ans,sq(x));
		}
		if(ans == LLONG_MAX)  {print(-1);}
		else  
		   print(ans);
	}
	return 0;
}