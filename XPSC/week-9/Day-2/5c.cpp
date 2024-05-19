#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    if(n==1){
        cout<<1<<"\n";
    }
    else if(n<4){
        cout<<"NO SOLUTION\n";
    }else if(n%2 == 1){
        vector<int> v;
        for(int i = 1 ; i<= n; i++){
            v.push_back(i);
        }
        int mid = (0+v.size()-1)/2;
        int l = mid- 1;
        int r = mid+1;
        while(l>=0 && r<=v.size()-1){
            cout<<v[l]<<" "<<v[r]<<" ";
            l--;
            r++;
        }
        cout<<v[mid]<<"\n";

    }else{
        vector<int> v;
        for(int i = 1 ; i<= n ;i++){
            v.push_back(i);
        }
        int mid = v.size() / 2;
        int l = mid -1 , r = mid +1 ;
        while(l>= 0 && r <= v.size()-1){
            // cout<<v[r]<<" "<<v[l]<<" ";
            cout<<v[l]<<" "<<v[r]<<" ";
            l--;
            r++;
        }
        r--;
        if((v[r] - v[mid]) != 1){

            cout<<v[mid]<<" "<<v[0]<<"\n";
        }else{
            cout<<v[0]<<" "<<v[mid]<<"\n";
        }
    }
}

//4
//1 2 3 4 -> 4 /2 --2
//0 1 2 3
//4 2 3 1
//2 4 1 3
//6
//1 2 3 4(mid) 5 6
//0 1 2 3 4 5 ->mid = 6/2 = 3
//5 3 6 2 4 1
// 1 2 3 4 5
// // 5 1 4 2 3
// 2 4 1 5 3

// 7
// 1 2 3 4 5 6 7
// 0 1 2 3 4 5 6 --> Index
// 3 5 2 6 1 7 4

//8 
// 1 2 3 4 5 6 7 8  
// 0 1 2 3 4 5 6 7 --> Index 
//5 3 6 2 7 1 8 4
// r age print 
// l pore print