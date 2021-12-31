#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

int main(){
	FIO;
	
	freopen("diamond,.in","r",stdin);
	freopen("diamond.out","w",stdout);
	
	int n,k;
	cin >> n >> k;
	
	vector<int> arr(n);
	int ans=0;
	//taking the input of bessie diamonds
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;++i){
		int count =1;
		for(int j=i+1;j<n;++j){
			if(arr[j]-arr[i] <= k) ++count;
			else break;
		}
		ans = max(count,ans);
	}
	cout << ans;
	return 0;
}
