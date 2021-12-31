#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int result = 1;
	int i=0;
	while(i < s.size()-1){
		int cnt = 1;
		if(s[i] == s[i+1]){
			cnt++;
			i++;
		}
		result = max(result,cnt);
		i++;
	}
	cout << result << endl;
	return 0;
}

