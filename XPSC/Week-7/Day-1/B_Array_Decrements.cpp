#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> v(n);
        vector<int> c(n);
        
        for(int i = 0 ;i<n ; i++){
            cin>>v[i];
        }
        for(int i = 0 ; i<n ; i++){
            cin>>c[i];
        }
        
        bool flag = true;
        for(int i = 0 ; i<n; i++){
            if(v[i] <c[i]){
                flag = false;
            }
        }
        if(!flag){
            cout <<"NO\n";
            continue;
        }
        
        set<int> sset;
        int MAX = INT_MIN;
        int rslt = INT_MAX;
        for(int i  = 0 ; i<n ; i++){
            if(c[i] == 0){
                MAX = max(MAX,v[i]);
            }else{
                 rslt = v[i] - c[i];
                sset.insert(rslt);
            }
        }
        
        if(sset.size() >1){
          // cout<<
            cout<<"NO\n";
            continue;
        }
        if(rslt < MAX){
          // cout<<"maximum value greater\n";
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        
        
    }
}