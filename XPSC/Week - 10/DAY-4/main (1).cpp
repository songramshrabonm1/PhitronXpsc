#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    int t;
    cin>>t;
    
    
    while(t--){
        int n;
        cin>>n;
        int N = n;
        pbds<int> value;
         pbds<int> index;
         int ind = 0;
         long long int ans = 0 ; 
         map<int,int> mp;
      
        while(N--){
            
            
            int a;
            cin>>a;
            ans+= (value.size() - value.order_of_key(a));//AMRA DUPLICATE VALUE RAKHTE CHAILE less_equal PBDS E RAKHBO
           
          
           value.insert(a);
            
            
            
            
            
        }
        cout<<ans<<"\n";
        
    }
}