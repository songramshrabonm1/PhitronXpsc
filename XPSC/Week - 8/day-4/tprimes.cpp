#include<bits/stdc++.h>
using namespace std;
#define ll long long 
bool primarilyTest(ll n){
    if(n == 1)return false;
    for(ll i = 2 ; i*i <=n ; i++){
        if(n%i == 0)return false;
    }
    return true;
}
bool perfectPrimeSquare(ll n){
    ll N = n;
    ll squaree = sqrt(n);
    if(squaree * squaree == N){
        return true;
    }else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    
        if(primarilyTest(sqrt(n)) && perfectPrimeSquare(n)){
            
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    
        
    }
    
    
}