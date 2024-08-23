#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int num=0;

        int Num = 0 ;
        for(int i = 0 ;i<n ;i++){
            if(s[i]=='B'){
                num+=Num;
                num++;
            
                Num=0;
            }else if(num!=0 &&s[i]=='W')
            {
                Num++;
  
            }
            
            
        }
        cout<<num<<endl;
    }

}