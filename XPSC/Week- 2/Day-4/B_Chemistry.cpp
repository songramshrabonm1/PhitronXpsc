#include<iostream>
using namespace std;
int main(){
        ios:: sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--){
            int n, m;
            cin>>n>>m;
            string ss;
            cin>>ss;
            sort(ss.begin(),ss.end());
            // cout<<ss<<endl;
            if(n == 1 && m == 0){
                cout<<"YES\n";
                continue;
            }else if(n == 2 && m == 1){
                cout<<"YES\n";
                continue;
            }else if(n == 2 && m == 0){
                if(ss[0] == ss[1]){
                    cout<<"YES\n";
                    continue;
                }else{
                    cout<<"NO\n";
                    continue;
                }
            }else if(abs(n-m) == 1){
                cout<<"YES\n";
                continue;
            }
            char frequency[26] = {0};

            for(int i = 0 ; i< n ;i++){
                int a = ss[i]-97;
                frequency[a]++;
            }
            int cnta = 0 ;
            for(int i = 0 ; i<26 ;i++){
                if(frequency[i]%2 == 1 ){
                    cnta++;
                }
            }
            if(cnta == m){
                cout<<"YES\n";
                continue;
            }else if(cnta < m){
                // m = m - cnta;
                // if(m%2 == 0){
                //     cout<<"YES\n";

                // }else if(m%2 == 1){
                //     cout<<"NO\n";
                    
                // }
                cout<<"YES\n";
                
            }else if(cnta > m){
                cnta = cnta - m;
                if(cnta ==1){
                    cout<<"YES\n";

                }else{
                    cout<<"NO\n";

                }

               
            }
            

        }

    return 0 ; 
}