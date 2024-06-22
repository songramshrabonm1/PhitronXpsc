#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2){
            long long int sum = 0 ; 
            int a,b;
            cin>>a>>b;
            sum = a+b;
            cout<<sum<<"\n";
            continue;
        }

        vector<int>v(n-1);
        int maximum = INT_MIN;
        for(int i = 0 ; i<n-1 ; i++){
            cin>>v[i];
            maximum = max(maximum,v[i]);

        }

        int last ;
        cin>>last;

        long long int sum = 0 ;
        sum +=last;
        sum+=maximum;
        cout<<sum<<"\n";
        


    }
}