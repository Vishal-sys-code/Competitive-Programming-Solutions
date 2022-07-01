#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        int n = s.size();
        for(int i=0;i<n;i++){
            m1[s[i]] = i+1;
            m2[t[i]] = i+1;
        }
        for(int i=0;i<n;i++){
            if(m1[s[i]] != m2[t[i]]) return false;
        }
        return true;
    }
};
