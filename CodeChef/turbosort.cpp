
//Codechef Problem no.8
//Author:- Vishal Pandey
//Date:- 26/02/2021
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	//taking inputs from user in the array
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		cout << arr[i] << endl;
	}
	return 0;
}
