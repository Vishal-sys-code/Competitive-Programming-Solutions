#include <bits/stdc++.h>
using namespace std;
//#define ll long long int 

int main(){
	int t;
	int sum=0;
	cin >> t;
	while(t--){
		int  n;
		cin >> n;
		while(n!=0){
		    sum=sum+(n%10);
		    n=n/10;
		}
		cout << sum;
	}
	//cout << sum;
	return 0;
}
