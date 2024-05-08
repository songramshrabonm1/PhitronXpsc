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
        int qqq;
        cin>>qqq;
        vec v(n);
         for(int i = 0 ; i<n ;i++){
            cin>>v[i];          
         }
        
         vec qq(qqq);
          for(int i = 0 ; i<qqq ;i++){
            cin>>qq[i];          
          }

           map<int,int> mp;
        //   unordered_set<int> s;
           vector<int>POWER;
           for(int i = 0 ; i<qqq;i++){
            // s.insert(qq[i]);
            if(mp[qq[i]]<1){
                mp[qq[i]]++;
                 POWER.push_back(qq[i]);

            }
           }
          
           
        //    for(int i = 0 ; i<POWER.size(); i++){
        //     // cout<<"Power[j]"<<POWER[i]<<"\n";
        //     for(int j = 0 ; j<n ; j ++){
        //         if(v[j] % (1<<POWER[i]) == 0){
        //             // ll add = ()
        //             // int aa = mp.count(POWER[i]);
        //             // cout<<"Power  : "<<POWER[i]<<" ";
        //             ll add = (v[j] + (1<<(POWER[i]-1)));
        //             // cout<<"add: "<<add<<"\n";
        //             v[j] = add;
        //             // cout<<"v[j]: "<<v[j]<<" \n";
        //         }
        //     }
        //    }
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<POWER.size(); j++){
                if((v[i] % (1<<POWER[j])) == 0){
                    v[i] = (v[i] + (1<<(POWER[j]-1)));
                }
            }
        }
           for(int i = 0 ; i<n ; i++){
            cout<<v[i]<<" ";
           }
        //    endlx/
  
       
        // for(int q = 1 ; q<=30 ; q++){
        //      for(int j = 0 ; j<n ;j++){
        //                 if(v[j] % (1<<q)==0){
        //                     ll add = (1<< (q -1));
        //                     v[j] = (v[j] + add);
        //                 }
        //      }
        // }

        // for(int i = 0 ; i<n ;i++){
        //     cout<<v[i]<<" ";
        // }

           endl
    }
}