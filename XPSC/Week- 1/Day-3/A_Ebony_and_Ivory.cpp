#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a == 1 || b == 1 ){
        cout<<"Yes"<<"\n";
        return 0;
    }
    long long int forA[100001];
    long long int forB[100001];
    
    for(int i = 0; i<=100001;i++){
        long long int d = a*i;
        forA[i]= d;
    }
    
    for(int i = 0; i<=100001;i++){
        long long int d = b*i;
        forB[i]= d;
    }
    
    // for(int i = 0 ; i<=100;i++){
    //     cout<<forA[i]<<endl;
    // }
    // cout<<endl<<endl;
    // for(int i = 0 ; i<=100;i++){
    //     cout<<forB[i]<<endl;
    // }
    
    
    for(int i = 0 ; i<=10000 ; i++){
        for(int j = 0 ; j<= 10000 ; j++){
            if(forA[i] + forB[j] == c){
                // cout<<forA[i]+forB[j]<<" "<<c<<endl;
                cout<<"Yes"<<"\n";
                return 0;
            }
        }
    }
    cout<<"No"<<"\n";
    return 0;
}