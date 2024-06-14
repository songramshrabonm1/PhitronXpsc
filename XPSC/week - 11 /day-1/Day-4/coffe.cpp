#include<bits/stdc++.h>
using namespace std;
 int main(){
    long long int N = 2e5+5;
    long long int n,k,q;
    cin>>n>>k>>q;
    vector<long long int> D(N);
    while(n--){
        long long int a,b;
        cin>>a>>b;
        D[a]++;
        D[b+1]--;
    }
    vector<long long int>Ok(N);
    for(long long int i = 1 ; i<N ; i++){
        D[i]+=D[i-1];
        
    }
    for(long long int i = 0 ; i<N ; i++){
        if(D[i]>=k)
        Ok[i]++;
    }
    for(int i = 1 ; i<N ; i++){
        Ok[i] = Ok[i] + Ok[i-1];
    }

    while(q--){
        long long int l,r;
        cin>>l>>r;
        cout<<Ok[r]-Ok[l-1]<<"\n";
    }
}