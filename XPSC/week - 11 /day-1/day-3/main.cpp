#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long 
int main(){
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);



    
    for(int i = 0 ; i<n ;i++){
        cin>> v[i];
    }
    pbds<pair<ll,ll>>pb;
    ll sum = 0 ; 
    for(int i= 0 ; i<k ;i++){
        pb.insert({v[i],i});
    
    
        
    }
    //ll valuee = *pb.find_by_order(k / 2);
    auto it = pb.find_by_order(k/2);
    ll valuee = it->first;
    
    //cout<<value<<" ";
    
    for(int i= 0 ; i<k ; i++){
        sum += abs(v[i] - valuee);
    }
    cout<<sum<<" ";
   
  
  for(int i = 0 ; i<n-k ; i++){
    //   pb.erase(pb.find_by_order(pb.order_of_key(v[i])));
    pb.erase({v[i],i});
       
    //   pb.insert(v[i+k]);
    pb.insert({v[i+k],i+k});
       
       //ll nowvalue = *pb.find_by_order((k+1)/2 -1);
        auto it = pb.find_by_order(k/2);
    ll nowvalue = it->first;
    
       sum+=(abs(nowvalue-v[i+k]) - abs(valuee - v[i]));
       if(k%2 == 0)sum-=(valuee- nowvalue);
       valuee = nowvalue;
       cout<<sum<<" ";
       
   }
   
    /*
8 3
2 4 3 5 8 1 2 1
Output:

2 2 5 7 7 1
    */
    
    

}
