#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {1,2,3,4,5,6};
	for(int i=0;i<v.size();i++){
		cout << v[i] << " ";
	}
	cout << endl;
	
	vector<pair<int,int> > v_p ={{1,2},{2,3},{3,4}};
	/*
	for(int i=0;i<v_p.size();i++){
			int x,y;
			cin >> x >> y;
			v_p.push_back({x,y});
	}
	*/
	vector<pair<int,int> > :: iterator d;
	
	for(d = v_p.begin(); d!= v_p.end() ; ++d){
		cout << (*d).first << " " << (*d).second << endl;
	}
	
	for(d = v_p.begin(); d!= v_p.end() ; ++d){
		cout << d->first << " " << d->second << endl;
	}
	return 0;
}
