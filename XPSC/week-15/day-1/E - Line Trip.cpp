#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
#define vec vector<int>
#define str string
int main(){
    int Testcase;
    cin>>Testcase;
   while(Testcase--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        vec v(n);
         for(int i = 0 ; i<n ; i++){
            cin>>v[i];          
         }        

         int maximumdistance;
          maximumdistance = v[0] - 0 ; 
            //   cout<<maximumdistance<<"\n";

          for(int i = 0 ; i<n-1 ; i++){
            maximumdistance = max(maximumdistance,abs(v[i] - v[i+1]));
            // cout<<"maximumdistance: "<<maximumdistance<<"\n";
          }
          maximumdistance = max(maximumdistance,(abs(v[n-1] - x)+abs(x-v[n-1])));
            // int value = abs()
          cout<<maximumdistance<<"\n";

    }
}