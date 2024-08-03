#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
#define vec vector<ll>
#define str string
#define sortv sort(v.begin(),v.end())
#define endll cout<<"\n"
int main(){
    int Testcase;
    cin>>Testcase;
    while(Testcase--){
      int n;
      cin>>n;
      vec v(n);
         for(int i = 0 ; i<n ; i++){
            cin>>v[i];          
         }     
         vec V(n);
          for(int i = 0 ; i<n ; i++){
            cin>>V[i];          
          }
          if(n == 1){
            cout<<v[0]<<"\n";
            continue;
          }
          ll rslt = 0 ; 
           for(int i = 0 ; i<n ; i++){
            rslt+=v[i];
           }
           sort(V.begin(),V.end());
           for(int i = 0 ; i<n -1 ; i++){
            rslt+=V[i];
           }
           cout<<rslt<<"\n";
    }
}
