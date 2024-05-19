#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.size() % 2 ==0){
        
          map<char,int> mp;
        for(int i = 0 ; i<s.size(); i++){
            mp[s[i]]++;
        }
        int Onetime = 0;
        bool flag = true;
        for(auto[x,y] : mp){
            if(y%2 != 0){
                flag = false;
                break;
            }
        }
        if(!flag)cout<<"NO SOLUTION\n";
        else{
            vector<char>samneralpha;
            vector<char>pichoneralpha;
            for(auto[x,y] : mp){
                for(int i =  0 ; i< (y/2) ; i++){
                    samneralpha.push_back(x);
                    pichoneralpha.push_back(x);
                }
            }
            reverse(pichoneralpha.begin(),pichoneralpha.end());
            for(int i = 0 ; i<samneralpha.size(); i++){
                cout<<samneralpha[i];
            }
            for(int i = 0 ; i<pichoneralpha.size(); i++){
                cout<<pichoneralpha[i];
            }
        }
    }else{
         map<char,int> mp;
        for(int i = 0 ; i<s.size(); i++){
            mp[s[i]]++;
        }
        int Onetime = 0;
        bool flag = true;
        for(auto[x,y] : mp){
            if(y % 2 != 0){
                Onetime++;
            }
            if(Onetime > 1){
                flag = false;
                break;
            }
        }
        if(!flag)cout<<"NO SOLUTION\n";
        else{
            vector<char>samneralpha;
            vector<char>pichoneralpha;
            char aaa;
            for(auto[x,y] : mp){
                if(y %2 == 1){
                    // 
                    aaa = x;
                }
                for(int i =  0 ; i< (y/2) ; i++){
                    samneralpha.push_back(x);
                    pichoneralpha.push_back(x);
                }
            }
            samneralpha.push_back(aaa);
            reverse(pichoneralpha.begin(),pichoneralpha.end());
             for(int i = 0 ; i<samneralpha.size(); i++){
                cout<<samneralpha[i];
            }
            for(int i = 0 ; i<pichoneralpha.size(); i++){
                cout<<pichoneralpha[i];
            }
        }
    }
}