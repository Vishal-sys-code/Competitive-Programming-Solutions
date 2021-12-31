#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,r=0;
		cin >> n;
		while(n!=0){
			r = (r*10)+(n%10);
			n/=10;
		}
		cout << r << endl;
	}
	return 0;
}
