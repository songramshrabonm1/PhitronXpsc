#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll GCD(ll a, ll b){
    return __gcd(a,b);
}
ll LCM(ll a, ll b){
    return ((a*b)/ GCD(a,b));
}
int main(){
    ll n,a,b,p,q, cnt = 0 , overlap ; 
    cin>>n>>a>>b>>p>>q;
    cnt +=((n/a)*p);
    cnt+= ((n/b)*q);
    overlap = n / (LCM(a,b));
    
    cnt -= overlap*(p+q);
    cnt+= overlap*max(p,q);
    cout<<cnt<<"\n";
    
}