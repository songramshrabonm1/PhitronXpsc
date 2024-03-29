#include<bits/stdc++.h>
using namespace std;
int main(){

       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
        long long int t;
        cin>>t;
        while(t--){
            long long int n , q;
            cin>>n>>q;
            long long int a[n+1];
            long long int pre[n+1] = {0};
            for(long long int i = 0 ; i<n ;i++){
                cin>>a[i];
                
            }
            for(long long int i = 0 ; i< n ;i++){
                if(i == 0){
                long long int aa = a[i];
                pre[i] += aa;
                }else{
                    long long int aa = a[i];
                    pre[i] = pre[i-1]+aa;
                }

            }
            

            while(q--){
                long long int l, r, k;
                cin>>l>>r>>k;
                long long int dif = r -  (l-1);
                long long int sum = dif*k;
                // cout<<"sum: "<<sum<<endl;
                l--,r--;
                long long int RINdexValue = pre[r];
                // cout<<"RindexValue: "<<RINdexValue<<"\n";

                long long int LtoRValue ;
                if(l == 0){
                    LtoRValue = pre[r];
                }else
                 LtoRValue = pre[r] - pre[l-1];
                
                // cout<<"LtoRValue: "<<LtoRValue<<"\n";


                long long int ArrayValue = pre[n-1];

                // cout<<"ArrayValue: "<<ArrayValue<<endl;

                long long int exactvalue = ArrayValue - LtoRValue ;
                // cout<<"exactValue : "<<exactvalue<<endl;

                sum += exactvalue;

                // cout<<"sum: "<<sum<<endl;

                if(sum%2 == 1){
                    cout<<"YES\n";
                }else{
                    cout<<"NO\n";
                }


            }

        }
    return 0;
}