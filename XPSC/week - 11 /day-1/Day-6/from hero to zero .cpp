#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
#define vec vector<ll>
#define str string
int main(){
    ll Testcase;
    cin>>Testcase;
    while(Testcase--){
        ll n,k;
        cin>>n>>k;
        ll cnt = 0 ;
        while(n != 0 ){
            
            cnt+=( n % k );
            n = n / k ; 

            if(n>0)
            cnt++;

             

        }       
        cout<<cnt<<"\n";
    }
}