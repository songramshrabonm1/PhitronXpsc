#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string r = s;
    reverse(r.begin(),r.end());
    map<char,vector<int>> ps_s , ps_r;
    for(int i = 0 ; i<n ; i++){
        ps_s[s[i]].push_back(i);
        ps_r[r[i]].push_back(i);
        
    }
    
    
    vector<int> permutation(n);
    
    for(char ii = 'a' ; ii<='z'; ii++){
        for(int i = 0 ; i<ps_s[ii].size() ; i++){
            permutation[ps_r[ii][i]]= ps_s[ii][i];
        }
    }
    
    // for(int i : permutation){
    //     cout<<i<<" ";
    // }
    cout<<endl;
    
    long long ans = 0 ; 
    pbds<int> p;
    for(int i = n-1 ; i>=0; i--){
        ans+=p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }
    cout<<ans<<"\n";
}