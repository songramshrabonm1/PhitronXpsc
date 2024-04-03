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
     cin.tie(nullptr);
      cout.tie(nullptr);
      int t;
      cin>>t;
      while(t--){
        int n;
        cin>>n;
        multiset<int>Multi;
        int aa[n];
        for(int i =0 ;i<n ;i++){
            int a ; 
            cin>>a;
            aa[i] = a;
            Multi.insert(a);

        }
        // cout<<"\n";
        // for(int i =0 ; i<n ;i++){
        //   cout<<aa[i]<<" ";
        // }
        // cout<<"\n";
        int rslt = 0 ;
          //for(int i = 0 ; i<n ;i++){}
        // for(auto it = Multi.begin() ; it!= Multi.end() ; it++){
        //   cout<<*it<<" ";
        // }
        // cout<<"check empty : "<<Multi.empty()<<"\n";
        // cout<<endl;
        // for(auto it = Multi.begin(); it!=Multi.end(); it++){
        auto it = Multi.begin();
        // while(!Multi.end()){
          while(!Multi.empty()){
          //1 2 2 3 3 4
            it = Multi.begin();

            int a = *it;

            int b= a+1;

            Multi.erase(it);

            // int cnt = 0 ; 


            auto itt = Multi.find(b);

           

            while(itt != Multi.end()){
              // cout<<"Hello\n";
              int nxt = *itt ;
              nxt = nxt+1;
              Multi.erase(itt);
              itt = Multi.find(nxt);
            }
            // cout<<"Hello"<<endl;
            rslt++;
            // auto iit = Multi.begin();
            // cout<<"it->begin()"<<*iit;
        }
            cout<<rslt<<"\n";
        
      // cout<<"result: "<<rslt<<"\n";



      }

    return 0 ; 
}