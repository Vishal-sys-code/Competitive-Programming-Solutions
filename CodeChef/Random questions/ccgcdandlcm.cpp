#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fio ios_base::sync_with_stdio(false)
#define send_help cin.tie(0)

int main(){
	fio;
	send_help;
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int c = (a*b);
		int lcm = (c)/(__gcd(a,b));
		cout << __gcd(a,b) << " " << lcm << endl;
	}
	return 0;
}
