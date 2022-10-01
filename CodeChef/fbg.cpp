#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define send ios_base::sync_with_stdio(false)
#define help cin.tie(0), cout.tie(0)


bool isVowel(char ch)
{
    if (ch != 'a' && ch != 'e' && ch != 'i'
        && ch != 'o' && ch != 'u')
        return false;
 
    return true;
}

bool isCons(char ch)
{
    ch = toupper(ch);
 
    return !(ch == 'A' || ch == 'E' ||
            ch == 'I' || ch == 'O' ||
            ch == 'U') && ch >= 65 && ch <= 90;
}
 

string repCons(string s)
{
    for (int i = 0; i < s.length(); i++) {
        if (isVowel(s[i]))
            continue;
 
        else {
 
            if (s[i] > 'a' && s[i] < 'e') {
                if (abs(s[i] - 'a') > abs(s[i] - 'e'))
                    s[i] = 'e';
                else
                    s[i] = 'a';
            }
            else if (s[i] > 'e' && s[i] < 'i') {
                if (abs(s[i] - 'e') > abs(s[i] - 'i'))
                    s[i] = 'i';
                else
                    s[i] = 'e';
            }
            else if (s[i] > 'i' && s[i] < 'o') {
                if (abs(s[i] - 'i') > abs(s[i] - 'o'))
                    s[i] = 'o';
                else
                    s[i] = 'i';
            }
            else if (s[i] > 'o' && s[i] < 'u') {
                if (abs(s[i] - 'o') > abs(s[i] - 'u'))
                    s[i] = 'u';
                else
                    s[i] = 'o';
            }
            else if (s[i] > 'u')
                s[i] = 'u';
        }
    }
 
    return s;
}


int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		for(int i=0;i<s.size();++i){
			if(s[i] == isCons(s[i])){
				s[i] = repCons(s[i]);
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
