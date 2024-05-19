#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    multiset<int>mp;
    for(int i =0 ; i<n ;i++){
        int a;
        cin>>a;
        mp.insert(a);
    }
    for(int i = 0 ; i<k ;i++){
        int a;
        cin>>a;
        auto it = mp.upper_bound(a);
        if(it == mp.begin()){
            cout<<-1<<"\n";
        }else{
            cout<<*(--it)<<"\n";
            mp.erase(it);
        }
    }
}