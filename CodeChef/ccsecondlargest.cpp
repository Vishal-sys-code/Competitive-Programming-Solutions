#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		//int a,b,c;
		//cin >> a >> b >> c;
		vi v;
		for(int i=0;i<3;i++){
			int x; cin >> x;
			v.pb(x);
		}
		sort(v.begin(),v.end());
		cout << v[1]<<endl;
	}
	return 0;
}
