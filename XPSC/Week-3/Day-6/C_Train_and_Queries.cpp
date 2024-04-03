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
#include <charconv>
// #include <execution>
#include <filesystem>
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
int main(){

       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        // cin>>'\n\n';
        int n, q;
        cin>>n>>q;
        vector<int>v;
        set<int> ms;
        map<int,vector<int> > mp;
        // vector<int> mp[n];

        for(int i =0 ;i<n ;i++){
            int a;
            cin>>a;
            v.push_back(a);
            ms.insert(a);
            // mp[a] = i;
            // mp.insert({a,i});
        }

        for(int i = 0 ; i<n ;i++){
            int a   = v[i];
            // mp[a].push_back(i);
            mp[a].push_back(i);

        }
        
       
        while(q--){
            int a,b;
            cin>>a>>b;
            bool aaa = ms.count(a);
            bool bbb = ms.count(b);
            if(aaa == false || bbb == false){
                cout<<"NO\n";
                continue;
            }else{
              
                int fst , scnd ;
                bool flag = false;
                    fst = mp[a].front();
                  
                    scnd = mp[b].back();
                 
                    if(fst<= scnd){
                        cout<<"YES\n";
                        flag = true;
                    }
          
                if(flag == false){
                    cout<<"NO\n";
                }
               
            }

        }
    }
    return 0;
}