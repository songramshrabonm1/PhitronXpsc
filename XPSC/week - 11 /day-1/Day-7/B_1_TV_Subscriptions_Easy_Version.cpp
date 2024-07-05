#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
#define vec vector<ll>
#define str string
int main(){
    int Testcase;
    cin>>Testcase;
    while(Testcase--){
        int n,k,d;
        cin>>n>>k>>d;
        vec v(n + 1);
         for(int i = 1 ; i<=n ; i++){
            cin>>v[i];          
         }       
         set<int> s; 
         map<int,int> mp;
         int cnt = 0 ; 
        int howMany = INT_MAX ; 
          for(int i = 1 ; i<=n ; i++){
                if(cnt < d){
                    cnt++;
                    // cout<<"cnt: "<<cnt<<"\n";
                    if(!s.count(v[i])){
                        // cout<<"element is not present in the set --> "<<v[i]<<"\n";
                        s.insert(v[i]);
                        mp[v[i]]++;
                    }else{
                        // cout<<"elemenet allready present in the set \n";
                        mp[v[i]]++;
                    }
                }
                 if(cnt == d && i<n){
                    // cout<<"cnt equal : --> "<<cnt<<"\n";
                    // cout<<"i: "<<i<<"\n";
                    if(howMany >= s.size()){
                        howMany = s.size();
                        // cout<<"howmany: "<<howMany<<"\n";
                        // cout<<"s.size: "<<s.size()<<"\n";
                    }
                    int fstelementIndex = i - (d-1);
                    int element = v[fstelementIndex];
                    // cout<<"fstelementIndex : "<<fstelementIndex<<"\n";
                    // cout<<"element: "<<element<<"\n";
                    if(mp[element] == 1){
                        mp.erase(element);
                        s.erase(element);
                        // cout<<"mp.erase() --> "<<s.size()<<"\n";
                    }else if(mp[element]>1){
                        mp[element]--;
                        // cout<<"here element greater than 1 "<<"\n";
                    }
                    cnt--;
                    // cout<<"\n\n\n\n\n\n";

                }
                if( i == n && cnt == d){
                    // cout<<"i: "<<i<<"\n";
                    // cout<<"cnt: "<<cnt<<"\n";
                    if(howMany>=s.size()){
                        
                        howMany = s.size();
                        // cout<<"howMany: "<<howMany<<"\n";
                    }
                }
          }

          cout<<howMany<<"\n";

    }
}