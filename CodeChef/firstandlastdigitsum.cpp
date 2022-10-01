#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		int f,l,sum=0;
		//storing the remainder in the last digit
		l = n%10;
		//divide and store in first number untill the number is greater than 10
		while(n>=10){
			n/= 10;
		}
		f = n;
		sum = f+l;
		cout << sum << endl;
	}
}
