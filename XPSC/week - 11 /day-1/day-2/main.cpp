#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i = 0 ; i<n ;i++){
        cin>>v[i];
    }
    vector<int> d(n+1);
    while(k--){
        int l , r;
        cin>>l>>r;
        l--;
        d[l]++;
        d[r]--;
    }
    
    for(int i = 1 ; i<=n ; i++){
        d[i] = d[i-1]+d[i];
    }
    sort(d.rbegin(),d.rend());
    sort(v.rbegin(),v.rend());
    long long int ans = 0 ; 
    for(int i = 0 ; i<n ; i++){
        ans+= (1ll* d[i] * v[i]);
    }
    cout<<ans<<"\n";
}