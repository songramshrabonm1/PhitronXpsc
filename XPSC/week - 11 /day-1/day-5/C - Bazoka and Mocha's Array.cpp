#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
#define vec vector<ll>
#define str string
int main(){
    int Testcase;
    cin>>Testcase;
    while(Testcase--){
        int n;
        cin>>n;
        vec v(n);
        for(int i = 0 ; i<n ; i++){
            cin>>v[i];
        }   
        bool flag = true;  
                vec sec;
        int I = 0 ; 
        for(int i = 1 ; i<n ; i++){
            I++;
            if(v[i] >= v[i-1] ){
                sec.push_back(v[i-1]);
                continue;
            }
            flag = false; 
            break;
        }
        if(flag){
            // true;
            cout<<"Yes\n";
            continue;
        }

        
        flag = true;
        for(int i = I+1 ; i<n; i++){
            if(v[i]>=v[i-1]){
                continue;
            }
            flag = false;
            break;
            
        }
        if(!flag){
            cout<<"No\n";
            continue;
        }

        if(v[n-1] <=v[0]){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }


        
    }
}