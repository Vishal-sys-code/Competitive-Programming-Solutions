#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,x,y,sum=0,s1,s2;
	cin >> a >> b >> x >> y;
	int d1,d2,d3,d4;
	d1 = abs(a-x);
	d2 = abs(a-y);
	d3 = abs(b-x);
	d4 = abs(b-y);
	s1 = min(dis1,dis2);
	s2 = min(dis3,dis4);
	sum = s1+s2;
	cout << sum << endl;
	return 0;
}
