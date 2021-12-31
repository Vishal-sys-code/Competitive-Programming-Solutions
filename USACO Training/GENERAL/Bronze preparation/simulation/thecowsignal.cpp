#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	//freopen("cowsignal.in","r",stdin);
	//freopen("cowsignal.out","w",stdout);

	int m,n,k;
	cin >> m >> n >> k;
	
	for(int i=0;i<m;i++){
		string s;
		cin >> s;
		for(int a=0;a<k;a++){
			for(int b=0;b<n;b++){
				for(int c=0;c<k;c++){
					cout << s[b];
				}
			}
			cout << endl;
		}
	}
	return 0;
}
