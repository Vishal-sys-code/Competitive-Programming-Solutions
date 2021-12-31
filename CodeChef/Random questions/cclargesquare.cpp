#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fio ios_base::sync_with_stdio(false)
#define send_help cin.tie(0)
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define vii vector<int,int>
#define vis vector<int,string>
#define endl "\n"

int main(){
     fio;
     send_help; 
     int t;
     cin >> t;
     while(t--){
     	int n,a;
		cin >> n >> a;
	    int root = (int) sqrt(n);
		int ans = root*a;
	   	cout << ans << endl;
     }
     return 0;
}
