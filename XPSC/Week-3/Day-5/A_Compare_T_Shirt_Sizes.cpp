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
      int testcase;
      cin>>testcase;
      while(testcase--){
        string a,b;
        cin>>a>>b;


        //first a te koy ta x paitesi .
        int cntAx = 0 , cntBx = 0 ; 
        bool as = false ;
        bool bs = false ;
        bool al = false ;
        bool bl = false ;
        bool am = false ;
        bool bm = false ;
        for(int i = 0 ; i<a.size(); i++){
            if(a[i] == 'X'){
                cntAx++;
            }
            else if(a[i] == 'S'){
                as= true;
            }
            else if(a[i] == 'L'){
                al = true;
            }
            else if(a[i] == 'M'){
                am= true;
            }
            
        }
        for(int i = 0 ; i<b.size(); i++){
            if(b[i] == 'X'){
                cntBx++;
            }
            else if(b[i] == 'S'){
                bs= true;
            }
            else if(b[i] == 'L'){
                bl = true;
            }
            else if(b[i] == 'M'){
                bm= true;
            }
        }

        if((as == true && bl == true) ||(as == true && bm) ){
            cout<<"<"<<"\n";
        }else if(am == true && bl == true ){
            cout<<"<"<<"\n";
        }else if(am == true && bs == true){
            cout<<">"<<"\n";
        }
        else if((al == true && bm == true) || (al == true && bs == true) ){
            cout<<">"<<"\n";
        }

        else{
            if(cntAx<cntBx){
                 if(a[a.size()-1] == 'S'){
                    cout<<">"<<"\n";
                }
                else if(a[a.size()-1] == 'L'){
                    cout<<"<"<<"\n";
                }
                 else if(a[a.size()-1] == 'M'){
                    cout<<"<"<<"\n";
                }
                
            }
            else if(cntAx > cntBx){
                if(a[a.size()-1] == 'S'){
                    cout<<"<"<<"\n";
                }
                else if(a[a.size()-1] == 'L'){
                    cout<<">"<<"\n";
                }
                else if(a[a.size()-1] == 'M'){
                    cout<<">"<<"\n";
                }
            }
            else if(cntAx == cntBx){
                cout<<"="<<"\n";
            }
        }



      }

    return 0 ; 
}