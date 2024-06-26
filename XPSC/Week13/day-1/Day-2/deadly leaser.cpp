#include<bits/stdc++.h>
using namespace std;
#define ll long long int  
#define vec vector<ll>
#define str string

int main(){
    int Testcase;
    cin>>Testcase;
    while(Testcase--){
        // cin>> n,m
        int row,col,sx,sy,d;
        cin>>row>>col>>sx>>sy>>d;
        
        int UP = sx-d;
        int Down = sx+d;
        int Left = sy-d;
        int right = sy+d;

        if(UP <= 1 && Down >= row){
            cout<<-1<<"\n";
        }else if(right >= col && Left <= 1){
            cout<<-1<<"\n";
        }else if(UP <= 1 && Left<=1 ){
            cout<<-1<<"\n";
        }else if(Down >= row && right>=col){
            cout<<-1<<"\n";
        }else{
            cout<<col-1+row-1<<"\n";
            
        }
           
        

             
    }
}