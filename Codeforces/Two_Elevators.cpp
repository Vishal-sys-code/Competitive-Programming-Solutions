#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fast_io(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    int tt; cin>>tt;
    for(int i=0;i<tt;i++){
        int a,b,c; cin>>a>>b>>c;
        int A = abs(a-1);
        int B = abs(b-c) + abs(c-1);
        if(A<B) cout << 1 << endl;
        else if(B<A) cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}