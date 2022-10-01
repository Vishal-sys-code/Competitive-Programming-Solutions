/*author:- Vishal Pandey
 * Codechef:- runtimegeek
 * Date:-  20 Aug 2021
 */

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
	int t=1;
   //cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll board_cells = n*n;
		ll black_cells = (board_cells)/2;
		cout << ceil(black_cells) << endl;
	}
	return 0;
}
