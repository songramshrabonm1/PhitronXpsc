#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int num=0;
        /*
        */
        int Num = 0 ;
        for(int i = 0 ;i<n ;i++){
         //   cout<<endl<<endl<<endl;
            if(s[i]=='B'){
                num+=Num;
                num++;
                // cout<<"first num inside Num: "<<Num<<endl;
                // cout<<"num"<<num<<endl;
                // cout<<"i"<<i<<endl;
                Num=0;
              //  cout<<endl<<endl;
            }else if(num!=0 &&s[i]=='W')
            {
                Num++;
                // cout<<"Num"<<Num<<endl;
                // cout<<"i"<<i<<endl;
            }
            
            
        }
        cout<<num<<endl;
    }
    /*
1
9
WBWBWWWBW
012345678

first num inside Num: 0
num1
i1

Num1
i2

first num inside Num: 1
num3
i3

Num2
i4



Num3
i5



Num4
i6

first num inside Num: 4
num8
i7





Num5
i8
8
    */
}