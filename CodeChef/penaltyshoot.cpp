#include <bits/stdc++.h>
using namespace std;
#define FIO  ios_base::sync_with_stdio(false)
#define ll long long;

void solve (){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int A_Score = 0,A_Round = 0;
	int B_Score = 0,B_Round = 0;
	for(int i=0;i<2*n;i++){
		if(i%2 == 0){
			if(s[i] == '1'){
				A_Score++;
			}
			A_Round++;
		}
		else{
			if(s[i] == '1'){
				B_Score++;
			}
			B_Round++;
		}
		//CHECKING OF THE CALCULATED VALUES
		int A_Calculated = A_Score - A_Round + n;
		int B_Calculated = B_Score - B_Round + n;
		if(A_Calculated < B_Score || B_Calculated < A_Score){
			cout << i+1 << endl; 
		    return;
		}
	}
	cout << 2*n << endl;
}




int main(){
	FIO;
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}