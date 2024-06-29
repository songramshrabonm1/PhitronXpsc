#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
#define vec vector<ll>
#define str string
int main(){
    int n;
    cin>>n;
    vec v(n);
     int cnt2 = 0 , cnt1 = 0 , Count = INT_MIN;
     int Cnt1 ,Cnt2;
     for(int i = 0 ; i<n ; i++){
        cin>>v[i];       

        if(v[i] == 1){
            if(cnt2>0){
                // cnt2 = 0 ;
                Cnt2 = cnt2 ; 
                cnt2 =0 ;  

            }
            cnt1++;
            // cout<<"cnt1: "<<cnt1<<"\n";
            // cout<<"Cnt2: "<<Cnt2<<"\n";
            if(cnt1 <= Cnt2){
              
                int count = cnt1 + cnt1 ; 
                Count = max(Count,count);
            }
            // cout<<"Count : "<<Count<<"\n";
        }else{
            
            if(cnt1>0){
                //cnt2 = 0 ;
                 Cnt1 = cnt1; 
                cnt1 = 0 ;
            }
            cnt2++;
            // cout<<"cnt2:"<<" "<<cnt2<<'\n';
            // cout<<"Cnt1: "<<Cnt1<<"\n";
            if(cnt2<= Cnt1){
                int count = cnt2 + cnt2;
                Count = max(count,Count);
            }
            // cout<<"Count : "<<Count<<"\n";
           
        }

     }
     cout<<Count<<"\n";

}