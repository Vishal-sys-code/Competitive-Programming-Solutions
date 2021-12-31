//ATM CODECHEF BEGINNER PROBLEM NO.1
#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cin >> x >> y;
	// x for withdrawing and y for checking balance
	double bal;
	if(x%5==0 && y%5 == 0){
		bal = (y-x)-0.5;
		cout << bal << endl;
	}
	else{
		cout << y << endl;
	}
	return 0;
}
