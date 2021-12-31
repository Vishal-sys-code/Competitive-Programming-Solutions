#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		double weight,h;
		cin>>weight>>h;
		double bmi;
		double height = (h*h);
		bmi = (weight)/height;
		if(bmi < 18.5){
			cout << "under" << endl;
		}
		else if((bmi < 25.0) and (bmi >= 18.5)){
			cout << "normal" << endl;
		}
		else if((bmi < 30.0) and (bmi >= 25.0)){
			cout << "over" << endl;
		}
		else if(bmi >= 30.0){
			cout << "obese" << endl;
		}
	}
	return 0;
}
