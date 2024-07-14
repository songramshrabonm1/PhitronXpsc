#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
const int Prime = 1e9+7;
const int Base = 251;


//...................Songram Shrabon..........................//
#define endl                cout<<"\n";
#define ll                  long long int
#define gcd(x, y)           (__gcd(x, y))
#define lcm(x, y)           ((x/gcd(x, y))*y)
#define rand(x, y)          rand()%(y-x+1)+x
#define pow2(x)             (1<<x)
#define pi                  3.141592653589793
#define decimal(x, y)       fixed<<setprecision(x)<<y
#define TxtI                freopen("input.txt","r",stdin);
#define TxtO                freopen("output.txt","w",stdout);
#define str                 string;
#define pair                  pair<ll,ll>
#define vec                 vector<ll>
#define py                  cout<<"YES\n"
#define pn                  cout<<"NO\n"
#define pb(x)               push_back(x)
//....................Radha Raman.............................//


int main()
{
    //srand(time(0));
    //TxtI TxtO
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int Testcase;
    
    cin >> Testcase;
    
    while(Testcase--)
    {
        char s[10][10];
        int cnt = 0 ; 
        for(int i = 0  ; i< 10 ; i++){
            for(int j = 0 ; j<10 ; j++){
                cin>>s[i][j];



                if(i== 0 || i== 9){
                    if(s[i][j] == 'X'){
                        cnt+=1;
                    }
                }
                else if((i>= 0 && i<= 9)&&(j == 0 || j== 9)){
                     if(s[i][j] == 'X'){
                        cnt+=1;
                    }
                }else if((i == 1 || i== 8) && (j>=1 && j<=8) ){
                  if(s[i][j] == 'X'){
                        cnt+=2;
                    }
                }else if((i>= 1 && i<=8)&&(j == 1 || j == 8)){
                     if(s[i][j] == 'X'){
                        cnt+=2;
                    }
                }
                else if((i == 2 || i== 7) && (j>= 2 && j<= 7)){
                    if(s[i][j] == 'X'){
                        cnt+=3;
                    }
                }else if((i>= 2 && i<=7)&&(j == 2 || j == 7)){
                    if(s[i][j] == 'X'){
                        cnt+=3;
                    }
                }
                else if((i == 3 || i== 6) && (j>=3 && j<= 6)){
                     if(s[i][j] == 'X'){
                        cnt+=4;
                    }
                }else if((i>= 3 && i<=6)&&(j == 3 || j == 6)){
                     if(s[i][j] == 'X'){
                        cnt+=4;
                    }
                }else if((i == 4 || i== 5) && (j == 4 || j == 5)){
                     if(s[i][j] == 'X'){
                        cnt+=5;
                    }
                }

            }
            
        }
        cout<<cnt<<"\n";
    }
}