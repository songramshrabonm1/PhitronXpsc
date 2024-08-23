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
       ll a,b,n;
       cin>> a>>b>>n;
       vec v(n);
        for(ll i = 0 ; i<n ;i++){
            cin>>v[i];          
        }
        ll ans = b-1;
        ll Ans ;
         for(int i = 0 ; i<n ;i++){
            Ans =v[i] + 1;
            
            if(Ans <a){
                ans += (Ans-1);
                Ans--;
            }else{
                ans += (a-1);
 
            }
         }
         cout<<ans+1<<"\n";
    }
}