#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    
    if(s1 == s2){
        cout<<0<<"\n";
    }else if(s1.size() != s2.size()){
        // cout<<"S1.size(): "<<s1.size()<<"\n";
        // cout<<"s2.size(): "<<s2.size()<<"\n";
        cout<<0<<"\n";
    }
    else{
        // cout<<s1<<endl;
        // cout<<s2<<"\n";
        // cout<<"NO\n";
        int cnt = 0 ; 
        // sort(s1.begin(),s1.end());
        // sort(s2.begin(),s2.end());
        for(int i =0 ; i<s1.size();i++){
            if(s1[i] != s2[i]){
                cnt++;
            }
        }
        
        cout<<cnt<<"\n";
    }
}