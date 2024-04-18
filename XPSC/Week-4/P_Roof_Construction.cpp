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
        int n;
        cin>>n ; 
        if(n == 2){
            cout<<0<<" "<<1<<"\n";
            continue;
        }
        vector<int> v;
        v.push_back((n-1));
        int lastNumber ;
        int lastSignificantBitPos = __lg((n-1));
        
         for(int i = (n-2) ; i>=0 ;i--){
            int aa = i;
            int LastSignifcantBit = __lg(aa);
            lastNumber = i;
            if(lastSignificantBitPos != LastSignifcantBit){
                break;
            }
            v.push_back(aa);

         }
         for(int i = 0 ; i<= lastNumber ; i++){
             if(lastNumber == 0 && i == 0 ){
                 break;
             }
            v.push_back(i);
         }
            for(int i = 0 ; i<v.size(); i++){
                cout<<v[i]<<" ";
            }
         endl
    }
}