#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n ; 
    long long int a[n];
    for(int i = 0 ;i<n ;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<"0\n";
        continue;
    }else if(n == 2){
        if(a[0] == a[1]){
            cout<<"0\n";
            continue;
        }else{
            cout<<"2\n";
            continue;
        }
    }
     sort(a,a+n);
        long long int MAX = 1;
        long long int cnt = 1 ; 
        for(int i = 0 ; i<n-1 ;i++){
            if(a[i] == a[i+1]){
                cnt++;
                MAX = max(MAX,cnt);
            }else if(a[i] != a[i+1]){
                cnt = 1 ;
            }
        }
        // cout<<"Max : "<<MAX<<endl;
        
        long long int ans = 0 ; 
        long long int length = n - MAX;
        // cout<<"before length: "<<length<<endl;
        // while(length >=1){
        //     if(length == 1){
        //         ans = ans + (1);
        //     }
        //     else
        //         ans = ans+ (1+MAX);
        //     length -= MAX;
        //     // cout<<"length: "<<length<<endl;
            
        // }
        while(length>=1){
            if(MAX<length)
            ans += (1+MAX);
            else
            ans +=(1+length);
            length -=MAX;
            MAX+=MAX;
            // cout<<"MAX: "<<MAX<<endl;
            // cout<<"Length: "<<length<<endl;
            
        }
        // cout<<"\n\nafter Length : "<<length<<endl;
        
        cout<<ans<<endl;
        
    }
    
}