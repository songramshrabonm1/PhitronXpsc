#include<iostream>
using namespace std;
int main(){
    int n, m ;
    cin>>n>>m;
    int a[n],b[m];
    for(int i =0 ; i<n ;i++){
        cin>>a[i];
    }
    for(int j = 0 ; j<m ;j++){
        cin>>b[j];
    }

    int l = 0 , r = 0 ;
    long long int sum = 0 ; 
    while(l<n && r<m){
        int cnt1 = 0 , cnt2 = 0 , current = a[l] ;
        // cout<<"current : "<<current<<" "<<"current2 : "<<current2<<endl;
        while(a[l] == current &&l<n){
            cnt1++;

            l++;
        }
        while(b[r]<current && r<m){
            r++;
        }
        while(b[r]==current && r<m){
            cnt2++;
            r++;
        }
        sum += (1ll * cnt1* cnt2);

    }
    cout<<sum<<endl;
}