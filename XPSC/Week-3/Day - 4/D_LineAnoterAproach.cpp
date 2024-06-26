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
        vector<char> Ultimate;
        vector<int>UltimateAns;
        long long int UltimateSum = 0 ; 
        if(n%2 == 1){
            for(int i = 1 ; i<=n/2 ; i++){
                Ultimate.push_back('R');
                UltimateAns.push_back((n-i));
                UltimateSum+=(n-i);
            }
            for(int i = (n/2)+1 ; i>=1 ; i--){
                Ultimate.push_back('L');
                UltimateAns.push_back((n-i));
                UltimateSum+=(n-i);
            }
        }else{
            for(int i = 1  ; i<=n/2 ; i++){
                Ultimate.push_back('R');
                UltimateAns.push_back(n-i);
                UltimateSum+=(n-i);
            }
            for(int i = (n/2) ; i>=1 ; i--){
                Ultimate.push_back('L');
                UltimateAns.push_back(n-i);
                UltimateSum+=(n-i);

            }
        }

        // for(char x : Ultimate){
        //     cout<<x;
        // }
        // cout<<"\n";
        // for(int i : UltimateAns){
        //     cout<<i;
        // }
        // cout<<"\n";
        // cout<<"UltimateSum : "<<UltimateSum;
        // cout<<endl;





        string s;
        cin>>s;
        long long int HereSum = 0 ; 
        vector<int>hereSum ;
        for(int i = 0 ;i<s.size() ; i++){
            int l = i ; 
            int r = n-i-1;

            if(s[i] == 'L'){
                HereSum+=l;
                hereSum.push_back(l);
            }else{
                HereSum+=r;
                hereSum.push_back(r);
            }
        }

            vector<int> changes;
            int change = 0 ; 
         for(int i = 0 ; i<n ;i++){
                char main = Ultimate[i];
                char given = s[i];
                if(main != given){
                    int aa = UltimateAns[i];
                    int bb = hereSum[i];

                    changes.push_back(abs(aa-bb));
                    change++;
                }
            }

            sort(changes.begin() , changes.end(), greater<int>());
            for(int x : changes){
                HereSum+=x;
                cout<<HereSum<<" ";
            }
            int oboshistro = n-change;
            while(oboshistro--){
                cout<<HereSum<<" ";
            }

            cout<<'\n';
    }
    return 0 ; 
}