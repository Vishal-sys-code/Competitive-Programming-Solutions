
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int arr[1000];

int main(){
    ll t,n,ans;
    cin>>t;
    while(t--){
        cin>>n;
        ans=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            if(arr[i+1]<=arr[i] && arr[i+1]!=0){
                ans=-1;
                break;
            }
            else{
                arr[i+1]=abs(arr[i]+arr[i+1]);
            }
        }
        if(ans==-1){
            cout<<ans;
        }
        else{
            for(int i=1;i<=n;i++){
                cout<<arr[i]<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}