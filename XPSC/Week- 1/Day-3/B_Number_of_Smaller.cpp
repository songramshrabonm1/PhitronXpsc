#include<iostream>
using namespace std;
int main(){
        ios:: sync_with_stdio(false);
        cin.tie(NULL);
        int n,m;
        cin>>n>>m;
        int a[n],b[m];

        for(int i = 0 ;i<n ;i++){
            cin>>a[i];
            
        }
        for(int i = 0 ;i<m;i++){
            cin>>b[i];

        }

        int l = 0 , r = 0 ;
        int cnt = 0 ;
        while(r<m){
            while(b[r]>a[l] && l<n){
                cnt++;
                // cout<<cnt<<endl;
                // cout<<'a'<<"["<<r<<"]"<<a[r]<<endl;
                // cout<<'b'<<"["<<l<<"]"<<b[l]<<endl;

                l++;
            }
            cout<<cnt<<" ";
            r++;
        }


    return 0 ; 
}