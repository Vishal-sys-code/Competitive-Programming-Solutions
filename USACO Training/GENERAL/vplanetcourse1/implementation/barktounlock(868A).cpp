#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	char c1,c2;
	int n;
	cin >> c1 >> c2 >> n;
	char a,b;
	int ans1 = 0;
	int ans2 = 0;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		if(a == c1 && b == c2){
			cout << "YES" << endl;
			return 0;
		}
		if(a == c2) ans1++;
		if(b == c1) ans2++;
	}
	if(ans1 && ans2) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
