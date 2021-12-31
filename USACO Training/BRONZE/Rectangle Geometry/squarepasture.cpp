/*
#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

int main(){
	fio;
	
//	freopen("square.in","r",stdin);
//	freopen("square.out","w",stdout);
	
	int x1,y1,x2,y2;
	int x3,y3,x4,y4;
	
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3 >> x4 >> y4;
	
	int L,R,T,B,side;
	
	L = min(x1,x3);
	R = max(x2,x4);
	T = max(y2,y4);
	B = min(y1,y3);
	
	side = max(R-L,T-B);
	
	cout << side*side << endl;
	
	return 0;
}

*/

//2nd Method

#include <bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

struct Rectangle{
	int x1,y1,x2,y2;
};


int main(){
	fio;
		
//	freopen("square.in","r",stdin);
//	freopen("square.out","w",stdout);

	Rectangle p,q;
	
	cin >> p.x1 >> p.y1 >> p.x2 >> p.y2;
	cin >> q.x1 >> q.y1 >> q.x2 >> q.y2;
	
	int minX = min(p.x1 , q.x1);
	int maxX = max(p.x2 , q.x2);
	int minY = min(p.y1 , q.y1);
	int maxY = max(p.y2 , q.y2);
	
	int difference =max(maxX-minX , maxY-minY) ;
	
	cout << difference*difference << endl;
	
	return 0;
}
