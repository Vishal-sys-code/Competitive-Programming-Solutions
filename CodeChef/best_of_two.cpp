#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define read1(a) cin>>a
#define read2(a,b) cin>>a>>b
#define print1(a) cout<<a<<endl
#define print2(a,b) cout<<a<<b<<endl
#define pend1(a) cout<<a<<endl
#define pend2(a,b) cout<<a<<b<<endl

void fast_io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
	// your code goes here
	fast_io();
	int tt; read1(tt);
	for(int i=0;i<tt;i++){
	    int a,b;
	    read2(a,b);
	    if(a<b) pend1(b);
	    else if(a>b) pend1(a);
	    else pend1(a);
	}
	return 0;
}
