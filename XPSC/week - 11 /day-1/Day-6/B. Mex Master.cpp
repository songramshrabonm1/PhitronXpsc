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
        vec v(n);
         int zero = 0 ; 
         int nonzero = 0 ;
         for(int i = 0 ; i<n ; i++){
            cin>>v[i];    
            if(v[i] ==0 )zero++;
            else if(v[i]!= 0)nonzero++;      
           
         }   

        if(zero<=nonzero){
         cout<<0<<"\n";
         continue;
        }
         // int x = sin(30);
         sort(v.begin(),v.end());     
         if(zero == n){
            cout<<1<<"\n";
         }else if(zero-1 ==nonzero ){
            cout<<0<<"\n";
         }else if(nonzero - 1 == zero){
            cout<<0<<"\n";
         }else if(nonzero == n){ //eta diye bjai zero nai 
            cout<<0<<"\n";
         }else if(nonzero == n-1){ // sudhu ekta zero ache
            cout<<0<<"\n";
         }else if(zero == (n-1)){ // nonzero sudhu ekta ache 
               if(v[n-1] ==1){
                  cout<<2<<"\n";
               }else{
                  cout<<1<<"\n";
               }
         }else if(zero == 1 ){
            if(n==1)
            cout<<1<<"\n";
            else
            cout<<0<<"\n";
         }
         else{
            int one = 0 ; 
            int Nonone = 0 ; 
            
            for(int i = 0 ; i<n ;i ++){
               if(v[i] == 1)one++;
               else if(v[i] >1)Nonone++;
            }
            // cout<<1<<"\n";
            if(Nonone == 0)cout<<2<<"\n";
            else cout<<1<<"\n";
         }
         

   }
}
