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
const int N = 2e5;
bool Visit[N];
vector<int>v[N];
int cnt = 0  ;
void dfs(int src){
    Visit[src] = true;
    if(v[src].size() == 1 && src != 1){
        cnt++;
        // cout<<"src: "<<src<<"  cnt: "<<cnt<<"\n";
        return ;
    }
    for(int child : v[src]){
        if(Visit[child] == false)
        dfs(child);
    }
}
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
      cout.tie(nullptr);

      int t;
      cin>>t;
      while(t--){

        memset(v,0,sizeof(v));
            memset(Visit,false,sizeof(Visit));

        int n;
        cin>>n;
        int NN= n-1 ; 
        while(NN--){
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int q;
        cin>>q;
        while(q--){
            memset(Visit,false,sizeof(Visit));
            int a,b;
            cin>>a>>b;
            cnt= 0 ; 
            int cnt1 = 0 , cnt2 = 0 ; 

            for(int i = 1 ; i<a; i++){
                Visit[i] = true;
            }
                
                
                dfs(a);
                cnt1 = cnt ;
                // cout<<"cnt1: "<<cnt1<<"\n";
                cnt = 0 ; 
          
            memset(Visit,false,sizeof(Visit));
              for(int i = 1 ; i<b; i++){
                Visit[i] = true;
            }
               
                dfs(b);
                cnt2 = cnt ;
                // cout<<"cnt2: "<<cnt2<<"\n";
                cnt= 0 ; 

           
            cout<<cnt1*cnt2<<"\n";
        }
      }

    return 0 ; 
}