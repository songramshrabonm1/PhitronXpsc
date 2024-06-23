#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int cnt = 0 ; 
        while(r>1){
            r = r / 2;
            cnt++;
        }
        cout<<cnt<<"\n";
    }
}
