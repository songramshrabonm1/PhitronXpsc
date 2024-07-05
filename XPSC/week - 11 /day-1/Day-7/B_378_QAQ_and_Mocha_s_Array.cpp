#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
#define vec vector<ll>
#define str string
int main(){
    int Testcase;
    cin>>Testcase;
    while(Testcase--){
        ll n ; 
        cin>>n;
        vec v(n);
         for(int i = 0 ; i<n ; i++){
            cin>>v[i];          
         }       
         sort(v.begin(),v.end());
         vec b;
          for(int i = 0 ; i<n ; i++){
                if(v[i] % v[0] != 0){
                    b.push_back(v[i]);
                }          
          }

          bool good = true;
           for(int i = 0 ; i<b.size() ; i++){
                if(b[i] % b[0] != 0){
                    good = false;
                    break;
                }
           }
        cout<<(good ? "YES" : "NO")<<"\n";
    }
}