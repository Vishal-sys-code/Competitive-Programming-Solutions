#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i;
	int count = 0;
	cin >> n;
	for(i=1;i<=n;++i){
		if(n%i == 0){
			count+=1;
			cout << i << " ";
		}
	}
	cout << endl;
	cout << count << endl;
	cout << i << " ";
	return 0;
}