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
        string a,b,c;
        cin>>a>>b>>c;
        bool flag =false;
        for(int i = 0 ; i<n ; i++){
            
            if(a[i] != c[i] && b[i] != c[i]){
                flag = true;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";

    }
}