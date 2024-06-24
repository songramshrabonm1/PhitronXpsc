#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool left = false,right = false, top = false, down = false;
        int cnt = 0 ; 
        for(int i = 0 ; i <4 ; i++){
            if(i == 0  && s[i] == '1'){
                left = true;
                cnt++;
            }else if(i == 1 && s[i] == '1'){
                right  = true;
                cnt++;
            }else if(i ==2 && s[i] == '1'){
                top = true;
                cnt++;
            }else if(i== 3 && s[i] == '1'){
                down = true;
                cnt++;
            }
        }
        if(cnt == 1)cout<<11<<"\n";
        else if(cnt == 3)cout<<231<<"\n";
        else if(cnt == 4)cout<<441<<"\n";
        else{
            if((left == true && right == true) || (top == true && down == true)){
                cout<<21<<"\n";
            }else{
                cout<<121<<"\n";
            }
        }
    }
}
