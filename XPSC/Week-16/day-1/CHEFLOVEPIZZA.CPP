#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // cout<<"n: "<<n<<"\n";
        int boro = 2; 
        
        // for(int i = 1; i<)
        int i = 1 ; 
        while(boro <= n){
            boro     = pow(2,i);
            i++;
        }
        i--;
   
        int rslt = boro - n ; 
        cout<<n-rslt<<"\n";
        
    }
}
