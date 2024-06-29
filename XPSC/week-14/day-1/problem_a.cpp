#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    
    vector<int> B;
    int index = 1; 
    for(int i = 0 ; i<n; i++){
        int val = a[i];
        // cout<<"index : "<<index<<" val"<<val<<"\n";
        if(index < val){
            B.push_back(0);
            
        }else if(index == val){
            B.push_back(0);
        }else if(index> val ){
            int dif = index - val;
            // cout<<"dif "<<dif<<"\n";
            B.push_back(dif);
        }
        index++;
        
    }
    bool flag = true;
    for(int i = 0 ; i<n ; i++){
        int vall = B[i]+ a[i];
        if(vall != (i+1)){
            cout<<"NO\n";
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout<<"YES\n";
    }
    }

    return 0;
}