#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<pair<int,int>>v;
    for(int i = 0 ; i<n;i++){
        int a;
        cin>>a;
        v.push_back({a,i+1});
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i<n ; i++){
        int fstIndex = v[i].first;
        int l = i+1 , r = n-1 , sum = 0 ;
        while(l<r){
            sum = fstIndex + v[l].first+ v[r].first;
            if(sum == k){
                cout<<v[i].second<<" "<<v[l].second<<" "<<v[r].second<<"\n";
                return 0;
            }
            else if(sum > k){
                r--;
            }else{
                l++;
            }
        }
    }
  
    
    cout<<"IMPOSSIBLE\n";

}