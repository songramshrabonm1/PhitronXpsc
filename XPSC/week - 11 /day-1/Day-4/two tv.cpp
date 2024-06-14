#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
        map<int,int> mp;
    while(t--){
        int l,r;
        cin>>l>>r;
        mp[l] ++;
        mp[r+1]--;

    }
    long long int sum = 0 ;
    bool ok = true;
    for(auto [idx, value] : mp){
        sum+=value;
        if(sum>2){
            ok = false;
            break;
        }
    }
    if(ok){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
}