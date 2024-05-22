#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vec vector<ll>
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int q;
    cin>>q;
    vec distance(k+1);
    distance[0] = 0 ;
    for(int i =1; i<=k ; i++){
        cin>>distance[i];
    }
    vec ttime(k+1);
    ttime[0]= 0 ;
    for(int i= 1 ; i<=k ; i++){
        cin>>ttime[i];
    }
    while(q--){
        ll d;
        cin>>d ;
        if(d == 0){
            cout<<0<<" ";
            continue;
        }else if(d == n){
            cout<<ttime[k]<<" ";
            continue;
        }
        auto it = upper_bound(distance.begin(),distance.end(),d);
        int index = it - distance.begin();
        ll Distance = distance[index] - distance[index-1];
        ll Time = ttime[index] - ttime[index-1];
        ll HereDistance = d - distance[index-1];
        ll TTime = ttime[index-1] + (HereDistance * Time )/(Distance);
    
        cout<<TTime<<" ";
    }
    cout<<"\n";
    }
    
}