#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int  row,col;
        cin>>row>>col;
        if(row<col){
            if(col % 2 == 0){
                long long int value = col*(col-2) + 2;
                value+=(row-1);
                cout<<value<<"\n";

            }else{
                long long int value = col * col;
                value -= (row-1);
                cout<<value<<"\n";
            }
            

        }else{
            if(row % 2 == 0){
            //row = 8 , col = 7 
            long long int Col = row;//Col = 8
            long long int value = Col*(Col-2)+2; // 8*6 +2 = 50
            value+= (Col-1);//50+7
            value+= (Col - col);//57+1
            cout<<value<<"\n";
            
            
            }else{
                // row 9 col 8 
                // row 9 col 5
                long long int Col = row - 1;
                long long int value = (Col*Col) ; // 64 + 1 = 65
                value+= col;
                cout<<value<<"\n";

            }


        }
    }
}