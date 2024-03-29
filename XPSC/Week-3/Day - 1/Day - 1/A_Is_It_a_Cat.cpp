#include<bits/stdc++.h>
using namespace std;
int main(){

       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
        int t;
        cin>>t;
        // cout<<"t : "<<t<<"\n";
        while(t--){
            int n;
            cin>>n;
           
            // cout<<"n: "<<n<<"\n";
            string s;
            cin>>s;
            if(n<4){
                cout<<"NO\n";
                continue;
            }
            // cout<<"s : "<<s<<"\n";
            for(int i = 0 ; i<n ;i++){
                if(s[i] <97){
                    s[i] = s[i] + 32;

                    
            }
            }

            // cout<<"new s : "<<s<<endl;


            queue<char>q;
            for(int i = 0 ; i<4 ;i++){
                if(i == 0 )
                q.push('m');
                else if(i == 1 )
                q.push('e');
                else if(i == 2 )
                q.push('o');
                else if(i == 3 )
                q.push('w');
             
            }
            bool flag = true;
            for(int i = 0 ; i<n ; i++){
                char x = s[i] ; 
                if(i == 0 && x != 'm'){
                    flag = false;
                    cout<<"NO\n";
                    break;
                }
                // cout<<"x: "<<x<<endl;
                if(x != 'm'  && x != 'e' && x != 'o' && x != 'w'){
                    cout<<"NO\n";
                    flag = false;
                    break;
                }
                char y = q.front();
                // if(x == y){

                    // cout<<"Y: "<<y<<endl;
                // }else 
                if(x!= y){
                    q.pop();
                    y = q.front();
                    // cout<<"Y: "<<y<<endl;
                    if(x != y){
                       cout<<"NO\n";
                       flag = false;
                       break;
                    }
                }
               

            }
            if(flag == false){
                continue;
            }
            if(flag == true){
                if(q.front() == 'w')
                q.pop();
            }
            if(flag == true && q.empty())
            cout<<"YES\n";
            else{
                cout<<"NO\n";
            }

                

        }
    return 0;
}