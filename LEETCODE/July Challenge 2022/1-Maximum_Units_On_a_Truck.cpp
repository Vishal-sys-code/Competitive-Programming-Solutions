#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    static bool Comparator(vector<int> a, vector<int> b){
        return (a[1] > b[1]);
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        //boxTypes[i] = [numberOfBoxesi, numberOfUnitsPerBoxi]
        sort(boxTypes.begin(), boxTypes.end(), Comparator);
        int ans = 0;
        for(auto i : boxTypes){
            int x = min(i[0], truckSize);
            ans += x*i[1];
            truckSize-=x;
            if(!truckSize) break;
        }
        return ans;
    }
};