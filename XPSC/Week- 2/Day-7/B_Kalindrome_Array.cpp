#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

      // ios_base::sync_with_stdio(false);
     //  cin.tie(NULL);
       int t;
       cin>>t;
       while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0 ;i<n ;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<"YES\n";
        }else if(n == 2){
            cout<<"YES\n";
        }else if(n==3){
            int aa = a[0];
            int ab = a[1];
            int ac = a[2];
            if(aa == ab || aa == ac || ab == ac){
                cout<<"YES\n";
            } else{
                cout<<"NO\n";
            }
        }
        else{
            int aa ;
            int bb ;
            int i = 0 , j = n-1;
            bool flagg = true;
            while(i<j){
                if(a[i] != a[j]){
                    flagg = false;
                    aa = a[i];
                    bb = a[j];
                    break;
                }
              
                i++;
                j--;
                
            }

            if(flagg == true){
                cout<<"YES\n";
                continue;
            }
            vector<int> v;
            vector<int> q;

            for(int i = 0 ;i<n ;i++){
                if(aa == a[i]){
                    continue;
                }
                // cout<<a[i]<<" ";
                v.push_back(a[i]);
            }

            for(int i = 0 ;i<n ;i++){
                if(bb == a[i]){
                    continue;
                }
                // cout<<a[i]<<" ";
                q.push_back(a[i]);
            }
            // cout<<endl;
            bool flag = true;
            bool flag1 = true;

            int k =0 , l= v.size()-1;
            int cntt1 = 0 ;
            while( k<l){
                if(v[k]!= v[l]){
                    flag = false;
                    cntt1++;
                    // break;
                }
                k++;
                l--;
            } 



            int m = 0 , n = q.size() - 1;
           
            int cntt2 = 0 ;
            while( m<n){
                if(q[m] !=q[n]){
                    flag1 = false;
                    cntt2++;
                }
                m++;
                n--;
            }
           
            if(flag1 == true || flag == true){
                cout<<"YES\n";
                continue;
            }

            cout<<"NO\n";
       }
       
    }

    return 0;
}
