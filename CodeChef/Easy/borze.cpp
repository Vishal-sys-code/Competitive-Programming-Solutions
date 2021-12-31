#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	string s,s2;
	cin >> s;
	int len = s.length();
	for(int i=0;i<len;i++){
		if(s[i] == '.'){
			//cout << "0" << " ";
			s2+='0';
			
		}
		if(s[i] == '-' && s[i+1] == '.'){
				//cout << "1" << " ";
				s2+='1';
				//i++;
				++i;
		}
		if(s[i] == '-' && s[i+1] == '-'){
			//cout << "2" << endl;
			s2+='2';
			//i++;
			++i;
		}
		//cout << s2 << endl;
	}
	cout << s2 << endl;
	return 0;
}