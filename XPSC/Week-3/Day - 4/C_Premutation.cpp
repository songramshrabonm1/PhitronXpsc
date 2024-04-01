#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        
        vector<int> v[n+1];
        for(int i =1 ; i<=n ;i++){
            for(int j = 1 ;j<=n-1 ;j++){
                int a;
                cin>>a;
                // cout<<"a: "<<a<<endl;
                v[a].push_back(j);
            }
        }
        
        // for(int i = 1 ;i<=n ;i++){
        //     cout<<"i:  "<<i<<" - ";
        //     for(int j = 0 ; j<n-1 ; j++){
        //         cout<<" -> "<<v[i][j]<<" "; 
        //     }
        //     cout<<"\n";
        // }

            int result[n+1] ;
            for(int i = 0 ;i<=n ;i++){
                result[i] = 0;
            }

         


            for(int i = 1 ; i<= n ;i++){
                int Max = INT_MIN;
                int cnt = 0 ; 
                int bb = 0 ; 
                int aa; 
                for(int j = 0 ; j<n-1 ;j++){
                     aa = v[i][j];

                     //Index er max ta nitesi ekhan theke 
                    Max = max(Max,aa);
                    if(aa == bb){
                        cnt++;
                    }
                    bb = aa;
                }

                //index ta kotobar repeat hoyeche eta chekc kortesi .
                if(aa == bb){
                    cnt++;
                }

                if(cnt ==(n-1) && Max == (n-1)){
                    result[n] = i;
                }
                // else if(cnt == (n-1) && Max != (n-1)){
                //     // cout<<"Max: "<<Max<<endl;
                //     // int maxx = Max;
                //     result[Max] = i;
                // }
                else {
                    result[Max] = i;
                }

            }
            for(int i = 1; i<= n ;i++){
                cout<<result[i]<<" ";
            }

            cout<<"\n";


            
    }
}