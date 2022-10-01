#include <bits/stdc++.h>
using namespace std;
#define FIO   ios_base::sync_with_stdio(false);
#define ll long long

vector<int>generateSemiPrimeNumbers(int n){
   int index[n + 1];
   for (int i = 1; i <= n; i++)
      index[i] = i;
   int countDivision[n + 1];
   for (int i = 0; i < n + 1; i++)
      countDivision[i] = 2;
   for (int i = 2; i <= n; i++) {
      if (index[i] == i && countDivision[i] == 2) {
         for (int j = 2 * i; j <= n; j += i) {
            if (countDivision[j] > 0) {
               index[j] = index[j] / i;
               countDivision[j]--;
            }
         }
      }
   }
   vector<int> semiPrime;
   for (int i = 2; i <= n; i++) {
      if (index[i] == 1 && countDivision[i] == 0) semiPrime.push_back(i);
   }
   return semiPrime;
}

int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--){
	    long int n,count=0;
	    cin>>n;
	    
	    vector<int>semiPrime = generateSemiPrimeNumbers(n);
     for (int i = 0; i < semiPrime.size(); i++){
       for (int j = 0; j < semiPrime.size(); j++){
           if(semiPrime[i]+semiPrime[j]==n){
              count++;
              break;
           }
       }
     }
      
      if(count>0){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
	}
	return 0;
}
