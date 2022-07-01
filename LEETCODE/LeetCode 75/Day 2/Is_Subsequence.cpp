#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool checkSub(string& s, string& t, int m, int n){
        if(m == 0) 
            return true;
        if(n == 0) 
            return false;
        
        if(s[m-1] == t[n-1])
            return checkSub(s,t,m-1,n-1);
        
        return checkSub(s,t,m,n-1);
    }
    bool isSubsequence(string s, string t) {
        if(checkSub(s,t,s.length(),t.length())) return true;
        return false;
    }
};
