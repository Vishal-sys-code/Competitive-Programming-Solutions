//SUM OF DIGITS CODECHEF PROBLEM NO.5
//Author:- Vishal Pandey
//Date:- 25/02/2021


#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//#define ll long long int 

int main(){
	int t,x,n;
	//int sum=0;
	cin >> t;
	while(t--){
	    int sum=0;
		int  n;
		cin >> n;
		while(n!=0){
		    //x = n%10;
		    sum=sum+(n%10);
		    n=n/10;
		}
		cout << sum << endl;
	}
	return 0;
}
