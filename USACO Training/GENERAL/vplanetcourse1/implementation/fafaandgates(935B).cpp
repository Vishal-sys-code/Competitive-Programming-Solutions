#include <bits/stdc++.h>
using namespace std;


int route(int mark, string guide);


int route(int mark, string guide){
	int x=0;
	int y=0;
	int coin = 0;
	for(int i=0;i<mark;i++){
		if(guide[i] == 'U') {y++;}
		else if(guide[i] == 'R'){x++;}
		if(x == y && x!=0 && y!=0){
			if(guide[i] == 'U' && guide[i+1] == 'U'){
				coin++;
			}
			else if(guide[i] == 'R' && guide[i+1] == 'R'){
				coin++;
			}
		}
	}
	return coin;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int mark;
	string guide;
	cin >> mark >> guide;
	cout <<	route(mark,guide);
	return 0;
}
