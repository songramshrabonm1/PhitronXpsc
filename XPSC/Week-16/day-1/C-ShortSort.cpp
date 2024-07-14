#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        string ss;
        cin>>ss;
        if(ss=="abc")cout<<"YES"<<endl;
        else if(ss=="acb") cout<<"YES"<<endl;
        else if(ss=="bac")cout<<"YES"<<endl;
        else if(ss=="cba")cout<<"YES"<<endl;
        else if(ss=="bca")cout<<"NO"<<endl;
        else if(ss=="cab")cout<<"NO"<<endl;
       // else if(ss=="bca")cout<<"NO"<<endl;
    }
}