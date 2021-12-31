#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SUM (n*(n+1))/2
int main(){
	ll n,sum=0;
	cin >> n;
	for(int i=1;i<n;i++){
		int x;
		cin >> x;
		sum+=x;
	}
	cout << SUM-sum << endl; 
	return 0;
}

