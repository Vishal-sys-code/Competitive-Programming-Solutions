#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define N 1000

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t; cin>>t;
	while(t--){
		//ll arr[];
		vector<int> arr;
		ll size = arr.size();
		for(int i=0;i<arr.size();i++){
			//cin>>arr[i];
			arr.push_back(i);
		}
		ll sum = 0;
		ll avg = 0;
		for(int i=0;i<arr.size();i++){
			sum+=arr[i];
		}
		avg = sum/(arr.size()-1);
		cout << avg << endl;
	}
	return 0;
}
