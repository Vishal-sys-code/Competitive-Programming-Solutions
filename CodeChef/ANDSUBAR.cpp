#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll t; cin>>t;
	while(t--){
        ll n; cin>>n;
        int p=log(n)/log(2);
	    int k=pow(2,p);
	   int x,y;
	   x=k/2;
	   y=n-k+1;
	   if(x>y)
	   cout<<x<<endl;
	   else
	   cout<<y<<endl;
	}
	return 0;
}
