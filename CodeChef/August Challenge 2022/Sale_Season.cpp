#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int x; cin>>x;
        if(x <= 100) cout << x << endl;
        else if(x > 100 and x <= 1000) cout << abs(x-25) << endl;
        else if(x > 100 and x <= 5000) cout << abs(x-100) << endl;
        // else if(x > 5000) cout << abs(x-500) << endl;
        else cout << abs(x-500) << endl;
        // else cout << x << endl;
    }
    return 0;
}