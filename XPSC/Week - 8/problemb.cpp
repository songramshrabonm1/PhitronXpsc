#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll r ,l;
    cin>>r>>l;
    
    ll cnt = ((l-r)+1)/2;
    // cout<<cnt<<"\n";
    cout<<"YES\n";
    for(int i = 0 ; i<cnt ; i++){
        cout<< r <<" "<< r+1<<"\n";
        r = r+2;
    }
    
    /// duita adjacent number er gcd always 1 ashe
    // 8 7
    // 8 -> 1  2  4 8 
    //7 - > 1 7
    
    //8 9 
    //8 -> 1  2  4 8 
    //9 -> 1 3 9 
}