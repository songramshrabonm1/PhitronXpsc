#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0 ; i<n ;i++){
            cin>>a[i];
        }
       
        int cnt = INT_MIN;
        if(n==1){
            cout<<a[0]+1<<endl;
        }else{
        for(int i = 0 ;i<n ;i++){
        int sum =1;
            int aa = a[i]+1;
            if(i==0){
                 for(int j = 0 ; j<n-1 ;j++){
                if(i==0 && i==j){
                    sum =aa*a[j+1];
                }
                else if(i==0)
                    sum = sum*a[j+1];
                // else 
                //     sum *=a[j];

            }
            }else{

            for(int j = 0 ; j<n ;j++){
                 if(i==j){
                    sum*=aa;
                }
                else 
                    sum *=a[j];
            }
            }
            if(sum>=cnt){
                cnt= sum;
            } 
        }
        cout<<cnt<<endl;
        }
    }
}