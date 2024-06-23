#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
#define vec vector<ll>
#define str string
int main(){
    string s,t;
    cin>>s>>t;
    int fst = s.length();
    int scnd = t.length();
    int Fst = fst - 1; 
    int Scnd = scnd - 1 ; 
    if(Fst>Scnd){
        for(int i = Fst ; i>= 0 ; i--){
            if(s[i] != t[Scnd]){
                break;
            }
            fst--;
            scnd--;
            if(Scnd == 0 || Fst == 0)break;
            Fst--;
            Scnd--;
          
        }
        ll cnt = fst + scnd;
        cout<<cnt<<"\n";
    }else{
        for(int i = Scnd ; i>=0 ; i--){
            if(t[i] != s[Fst]){
                break;
            }
            fst--;
            scnd--;
             if(Scnd == 0 || Fst == 0)break;
            Fst--;
            Scnd--;
            
        }
        ll cnt = fst+ scnd;
        cout<<cnt<<"\n";
    }

}