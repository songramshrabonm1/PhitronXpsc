#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c ;
        cin>>c;
        string s;
        cin>>s;
        string ds ;
        ds = s+s;
        
        vector<int> v;
        
        for(int i = 0 ;i<s.size();i++){
            if(s[i] == c){
                v.push_back(i);
            }
        }
        int MAx = 0;
        for(int i = 0 ; i<v.size(); i++){
            int index = v[i];
             int cnt = 0 ; 
             while(ds[index] != 'g'){
                 cnt++;
                 index++;
             }
              MAx = max(MAx,cnt);
        }
        cout<<MAx<<"\n";
    }
}