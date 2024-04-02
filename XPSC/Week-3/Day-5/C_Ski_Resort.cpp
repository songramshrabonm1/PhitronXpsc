#include<bits/stdc++.h>
using namespace std;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
      cout.tie(nullptr);
      long long int t;
      cin>>t;
      while(t--){
        long long int n,k,t;
        cin>>n>>k>>t;
        long long int a[n];
        long long int q =0 ;
        long long long long int sum = 0 ; 
        for(long long int i = 0 ;i<n ;i++){
            cin>>a[i];
            if(a[i] <= t){
                q++;
            }else{
                if(q<k){
                    q=0;
                    continue;
                }
                // cout<<"q:"<<q<<endl;

                long long int p = q-k+1;
                sum += (p*(p+1))/2;
                // cout<<"sum: "<<sum<<"\n";
                q=0;
            }

        }
        if(q!= 0){
            if(q<k){
                if(sum == 0){
                    cout<<0<<endl;
                }else{
                    cout<<sum<<endl;
                }
                continue;
            }
            // cout<<"q: "<<q<<endl;
            long long int p = q-k+1;
            sum += (p*(p+1))/2;
        }
        cout<<sum<<"\n";
      }
      

    return 0 ; 
}