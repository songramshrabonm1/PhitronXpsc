#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    for(int i = 0 ; i<n ; i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    vector<ll> difference(n+1,0);
    while(q--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        difference[l]++;
        difference[r+1]--;
    }

    for(int i = 1 ; i<n ; i++){
        difference[i] =difference[i]+difference[i-1]; 
    }
    sort(difference.rbegin(),difference.rend());
    ll sum = 0;
    for(int i = 0 ; i<n ;i ++){
        sum+=(difference[i] * v[i]);
    }
    cout<<sum<<"\n";
}