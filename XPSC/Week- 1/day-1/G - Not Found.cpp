#include<bits/stdc++.h>
using namespace std;
int main(){

       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
    string s;
    cin>>s;
    // cout<<s<<"\n";
    int a[26] = {0};
    // for(int i = 0 ; i<26 ; i++){
    //     char s = i+97;
    //     cout<<s<<" : "<<a[i]<<"\n";
    // }
    // cout<<endl<<endl;
    for(int i = 0 ;i< s.length(); i++){
        int b = s[i];
        // cout<<s[i]<<" "<<b<<endl;
        b = b - 97;
        // cout<<s[i]<<" "<<b<<endl;
        
        a[b] = a[b]+1;
    }

    // cout<<endl<<endl;
    // for(int i = 0 ;i<26 ;i++){
    //     char s =  i+97;
    //     cout<<s<<" "<<a[i] <<"\n";
    // }

    bool flag = false;
    for(int i = 0 ;i<26 ; i++){
        if(a[i] == 0){
            int aaaa = i ;
            char ss = aaaa + 97;
            
            cout<<ss<<"\n";

           
            // return 0 ;
            flag = true;
            break;
        }
    }
    if(flag == false)cout<<"None"<<"\n";
    return 0;
}
