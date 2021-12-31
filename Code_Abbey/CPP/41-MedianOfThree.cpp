#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define send_help ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

int main(){
	send_help;
	int t; cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if((a>b && a<c) || (a<b && a>c)){
			cout << a << endl;
		}
		else if((b>a && b<c) || (b<a && b>c)){
			cout << b << endl;
		}
		else{
			cout << c << endl;
		}
	}
	return 0;
}
