#include<bits/stdc++.h>
using namespace std;
int main(){
        ios:: sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n ;
            int a[n];
            for(int i = 1 ; i<= n ;i++){
                cin>>a[i];
            }
        

            int cnt = 0 ; 
             for(int i = 1 ; i<= n ;i++){
                if(a[i]> i+cnt){ // এখানে আমি চেক করছি ইনডেক্স এ যে ভ্যালু টা আছে এই ভ্যালু টা ছোট কিনা ইনডেক্স থেকে । আর +cnt করেছি ভ্যালু থেকে কারণ ইনডেক্স টা  তো আপডেট হয়ে গেছে (cnt দিয়ে বুঝিয়েচি কয়টা ভ্যালু ইনসার্ট করছি । 
                    int c = a[i] - i - cnt;
                    cnt+=c;
                }
             }
             cout<<cnt<<"\n";
        }

    return 0 ; 
}