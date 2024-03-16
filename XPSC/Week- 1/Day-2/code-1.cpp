#include<bits/stdc++.h>
using namespace std;
int main(){
        ios:: sync_with_stdio(false);
        cin.tie(NULL);
 
        int n ;
        cin>>n;
        // vector<bool> vv;
        int vv[n+1] = {0};
 
        for(int i   = 0 ; i<n-1 ;i++){
            int aa;
            cin>>aa;
 
            vv[aa] = 1;
 
        }
        
        // for(int i = 0 ; i<n ;i++){
        //     cout<<i<<" : "<<vv[i]<<"\n";
        // }
 
        for(int i = 1 ; i<=n ;i++){
            if(vv[i] != 1){
                cout<<i<<"\n";
                break;
            }
        }
 
    return 0 ; 
}