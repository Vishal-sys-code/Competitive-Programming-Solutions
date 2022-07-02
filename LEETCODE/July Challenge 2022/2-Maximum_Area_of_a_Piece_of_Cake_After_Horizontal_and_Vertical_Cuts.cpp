#include <bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts,   vector<int>& verticalCuts) {
        //adding h to the Horizontal Array
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        
        //adding w to the Vertical Array
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        
        //sorting both the array
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        ll max_length = 0, max_breadth = 0;
        
        //finding the maximum consecutive distance by providing maximum Length to the Vertical Cut array and the maximum breadth to the horizontal cut array.
        for(int i=1; i<horizontalCuts.size(); i++){
            if(max_breadth < (horizontalCuts[i] - horizontalCuts[i-1])){
                max_breadth = horizontalCuts[i] - horizontalCuts[i-1];
            }
        }
        
        for(int i=1; i<verticalCuts.size(); i++){
            if(max_length < (verticalCuts[i] - verticalCuts[i-1])){
                max_length = verticalCuts[i] - verticalCuts[i-1];
            }
        }
        
        //maximum area and returning by MODULUS OF 10^9+7
        ll ans = (max_length * max_breadth);
        return (ans)%1000000007;
    }
};