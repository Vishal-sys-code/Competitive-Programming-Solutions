#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	//freopen("paint.in","r",stdin);
	//freopen("paint.out","w",stdout);
	
	int a,b;
	int c,d;
	
	cin >> a >> b; //inputs for a and b
	cin >> c >> d; //inputs for c and d
	
	int interval,intersection,ans = 0;
	
	interval = (b-a)+(d-c);
	intersection = max(min(b,d) - max(a,c),0);
	
	ans = interval - intersection;
	cout << ans << endl;
	
	return 0;
}
