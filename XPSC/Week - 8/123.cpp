#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(primarilityTest(n) ){
        cout<<1<<"\n";
    }else if(n%2 == 0){
        cout<<2<<"\n";
    }else{
        if(primarilityTest(n-2)){
            cout<<2<<"\n";
        }else{
            cout<<3<<"\n";
        }
    }
}