#include <bits/stdc++.h>
using namespace std;
#define FIO    ios_base::sync_with_stdio(false)
int main(){
	FIO;
	int t;
	cin >> t;
	while(t--){
		int L,B;
		cin >> L >> B;
		int c = __gcd(L,B);
		cout << c << endl;
	}
	return 0;
}