/* s = number of characters to enter
 * v1 = boy1 type characters in seconds(ms)
 * v2 = boy2 type characters in seconds(ms)
 * t1 = ping of boy 1
 * t2 = ping of boy 2
 * Formula = (2*t)+(v*s)
 *         = (2*t1)+(v1*s) = for boy1
 * 		   = (2*t2)+(v2*s) = for boy2
 */


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	ll s,v1,v2,t1,t2;
	cin >> s >> v1 >> v2 >> t1 >> t2;
	
	ll a,b;
	a = (2*t1)+(v1*s);
	b = (2*t2)+(v2*s);
	
	if(a < b) cout << "First" << endl;
	else if(b < a) cout << "Second" << endl;
	else cout << "Friendship" << endl;
	
	return 0;
}
