#include <bits/stdc++.h>
using namespace std;
#define FIO   ios_base::sync_with_stdio(false);
#define ll long long
int main(){
	FIO;
	int t;
	cin >> t;
	while(t--){
		int n,a,b,k;
		cin >> n >> a >> b >> k;
		ll ans = (a*b)*__gcd(a,b);
		ll sum = (n/a)+(n/b)-2*(n/ans);
		if(sum>=k) cout << "Win" <<"/n";
		else  cout << "Lose" << "/n";
	}
	return 0;
}