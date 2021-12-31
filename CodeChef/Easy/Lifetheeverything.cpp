#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	if((n%5 == 0) || (n%11 == 0)){
		cout << "ONE" << endl;
	}
	if((n%5 == 0) && (n%11 == 0)){
        cout << "BOTH" << endl;
    }
    else{
        cout << "NONE" << endl;
    }
	return 0;
}