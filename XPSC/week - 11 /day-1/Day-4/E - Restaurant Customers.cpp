#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //vector<int> customer(n+1);
    map<int,int>customer;
    for(int i = 0 ; i<n ; i++){
        int l,r;
        cin>>l>>r;
        l--,r--;
        customer[l] ++;
        customer[r+1] --;
    }
    int maximum = INT_MIN;
    int sum = 0 ;
    for(auto [ x,y ] :customer ){
        sum+=y;
        maximum = max(sum,maximum);
    }
    cout<<maximum<<"\n";
    
}