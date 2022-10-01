#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fio ios_base::sync_with_stdio(false)
#define send_help cin.tie(0)

int factorial(ll n){
	return (n==1 || n==0) ? 1 : n*(factorial(n-1));
}

int main(){
	fio;
	send_help;
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << factorial(n) << endl;
	}
	return 0;
}
