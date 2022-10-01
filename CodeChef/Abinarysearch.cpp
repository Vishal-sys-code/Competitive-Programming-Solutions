#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int l, int r, int x){
	//int m = (l+r)/2;
	while(l<=r){
		int m = (l+r)/2;
		if(arr[m] == x){
			return m;
		}
		else if(arr[m] >= x){
			r = m-1;
		}
		else{
			l = m+1;
		}
	}
	return -1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,k;
	cin >> n >> k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	//sort(arr,arr+n);
	while(k--){
		int x;
		cin >> x;
		int ans = binarySearch(arr,0,n-1,x);
		if(ans == -1){
			cout << "NO" << endl;
		}
		else{
			cout << "YES" << endl;
		}
	}
	return 0;
}