#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
// #include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
// #include <cuchar>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

#if __cplusplus >= 201402L
#include <shared_mutex>
#endif

#if __cplusplus >= 201703L
#include <any>
//#include <charconv>
// #include <execution>
//#include <filesystem>
#include <optional>
// #include <memory_resource>
#include <string_view>
#include <variant>
#endif

#if __cplusplus >= 202002L
#include <barrier>
#include <bit>
#include <compare>
#include <concepts>
#if __cpp_impl_coroutine
# include <coroutine>
#endif
#include <latch>
#include <numbers>
// #include <ranges>
#include <span>
// #include <stop_token>
#include <semaphore>
// #include <source_location>
// #include <syncstream>
#include <version>
#endif

#if __cplusplus > 202002L
#include <spanstream>
#endif
//#include<bits/stdc++.h>
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
#define str                 string
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
        cin>>n;
        vec v(n);
        vec plus;
        vec negative;
         for(int i = 0 ; i<n ;i++){
            cin>>v[i];  
            if(v[i]>=0){
                plus.push_back(v[i]);
            }else{
                negative.push_back(v[i]);
            }        

         }
         ll ans = 0 ; 
         sort(v.begin(), v.end());
         sort(plus.begin(),plus.end());
         sort(negative.begin(),negative.end());
         if(plus.size() == n ){
             for(int i = 0 ; i<plus.size() ;i++){
                    ans+=plus[i];
             }
             cout<<ans<<"\n";
             continue;
         }else if(negative.size() == n){
            if(n%2 == 0){
                for(int i = 0 ; i<n ; i++){
                    ans+=(negative[i]*-1);
                }
                cout<<ans<<"\n";
                continue;
            }else{
                 sort(negative.begin(),negative.end());
                //  reverse(negative.begin(),negative.end());
            // cout<<-1*negative[0]<<"\n";
            for(int i = 0 ; i<negative.size()-1 ;i++){
                ans+=(negative[i]*-1);
            }
            ans+=(negative[negative.size()-1]);
            cout<<ans<<"\n";
            continue;
            }
           
         }
         else{
            for(int i= 0; i<plus.size(); i++){
                ans+= plus[i];
            }
            // cout<<"ans: "<<ans<<"\n";
            
            if(negative.size() % 2 == 0 ){
            reverse(negative.begin(),negative.end());
                for(int i = 0 ; i<negative.size(); i++){
                    ans+=(negative[i]*(-1));
                }
                cout<<ans<<"\n";
                continue;
            }else{
                // int ans = ans;
                ll ANS = ans;
                for(int i = 0 ; i<negative.size(); i++){
                    ans+=(negative[i] *(-1));
                }
                ll Ans = ans;




                Ans+=(plus[0]*-1)*2;
                ans += negative[negative.size()-1]*2;
                reverse(negative.begin(),negative.end());
                 for(int i = 0 ; i<negative.size(); i++){
                    ANS+=(negative[i] *(-1));
                }
                ll AAns = ANS;
                AAns+=(plus[0] *-1)*2;
                ANS +=negative[negative.size()-1]*2;



                
                if(Ans < ans){
                    if(AAns <ANS){
                        if(ANS<ans){
                            cout<<ans<<"\n";
                        }else{
                            cout<<ANS<<"\n";
                        }
                    }else{
                        if(AAns<ans){
                            cout<<ans<<"\n";
                        }else{
                            cout<<AAns<<"\n";
                        }
                    }
                    // cout<<ans<<"\n";    
                }else{
                    if(AAns<ANS){
                        if(ANS<Ans){
                            cout<<Ans<<"\n";
                        }else{
                            cout<<ANS<<"\n";
                        }
                    }else{
                        if(AAns<Ans){
                            cout<<Ans<<"\n";
                        }else{
                            cout<<AAns<<"\n";
                        }
                    }
                }
                
                // continue;




            }

            // for(int i=0; i<negative.size(); i++){
            //     int Ans = ans;
            //     // cout<<"fst Ans : "<<Ans<<"\n";
            //     Ans += (negative[i]*(-1));
            //     Ans+= (plus[i]*(-1))*2;
            //     // cout<<"Ans: "<<Ans<<"\n";
            //     if(Ans<ans){

            //         ans += negative[i];
            //         continue;

            //     }
            //     ans = Ans;
                
            // }
            // cout<<ans<<"\n";
         }

    }

}