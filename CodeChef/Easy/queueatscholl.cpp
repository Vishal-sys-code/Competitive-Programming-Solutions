#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,t;
	string s;
	cin >> n >> t;
	cin >> s;
	while(t--){
		for(int i=0;i<n;i++){
		    if(s[i] == 'G' && s[i-1] == 'B'){
			     s[i] = 'B';
			     s[i-1] = 'G';
				 ++i;
		    }
	    }
	}
	
	/*for(int i=0;i<n;i++){
		if(s[i] == 'G' && s[i-1] == 'B'){
			s[i] = 'B';
			s[i-1] = 'G';
			++i;
		}
	}*/
	cout << s << " " ;
	return 0;
}