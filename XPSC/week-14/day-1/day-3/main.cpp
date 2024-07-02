#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string p , h;
        cin>>p;
        int n = s.size();
        int n2 = p.size();
        bool flag = false;
        sort(s.begin(),s.end());
        for(int i = 0 ; i<=n2-n; i++){
            h = p.substr(i,n);
            sort(h.begin(),h.end());
            if(h == s){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}