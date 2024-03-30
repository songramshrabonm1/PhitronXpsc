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
int n, m ;
int a[200][200];
int sum1 = 0 , sum2 = 0 , sum3 = 0 , sum4 = 0 ;; 
int Sum = 0 ;
bool valid(int i , int j ){
    if(i<0 || i==n || j<0 ||j==m)return false;
    return true;
}
void fstCorner(int i , int j){

    // cout<<"fstcorner : "<<endl;
    // cout<<"i: "<<i<<"j: "<<j<<endl;


    if(!valid(i,j))return;
    
    if(valid(i,j)){


        // cout<<"a[i][j]"<<a[i][j]<<endl;


        sum1 += a[i][j];


        // cout<<sum1<<"\n";

    }
    i = i - 1 ;
    j = j - 1 ;

     fstCorner(i,j);
}
void scnd(int i , int j){


    // cout<<"scnd: "<<endl;
    // cout<<"i: "<<i<<"j: "<<j<<endl;


    if(!valid(i,j))return;
   
    // cout<<"i: "<<i<<"j : "<<j<<endl;
   
    if(valid(i,j)){
        // cout<<"a[i][j]"<<a[i][j]<<endl;
        
        sum2 += a[i][j];

        // cout<<sum2<<"\n";

    }
     i = i - 1 ;
    j = j + 1 ;

     scnd(i,j);
}
void third(int i  , int j){
    // cout<<"third: \n";
    // cout<<"i: "<<i<<"j: "<<j<<endl;
    if(!valid(i,j))return ;
    
    if(valid(i,j)){
        sum3 += a[i][j];

    }
    i = i + 1 ;
    j = j - 1 ;

     third(i,j);
}
void last(int i , int j){
    // cout<<"last: \n";
    // cout<<"i: "<<i<<"j: "<<j<<endl;
    if(!valid(i,j))return ;
    
    if(valid(i,j)){
        sum4 += a[i][j];

    }
    i = i + 1 ;
    j = j + 1 ;
    
     last(i,j);
}
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
      cout.tie(nullptr);
      int t;
      cin>>t;
      while(t--){
        
        cin>>n>>m;
         a[n][m];

        for(int i = 0 ; i<n ;i++){
            for(int j = 0 ; j<m ;j++){
                a[i][j] = 0 ; 
            }
        }


        //  for(int i =0 ; i<n ;i++){
        //     for(int j = 0 ; j<m ;j++){
        //         // cin>>a[i][j];
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        

        for(int i =0 ; i<n ;i++){
            for(int j = 0 ; j<m ;j++){
                cin>>a[i][j];
            }
        }




        // for(int i =0 ; i<n ;i++){
        //     for(int j = 0 ; j<m ;j++){
        //         // cin>>a[i][j];
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }




        // cout<<"Before Sum : "<<Sum<<" sum1 : "<<sum1<<" sum2 : "<<sum2 << " sum3 : "<<sum3<<"\n";
        int MAX = INT_MIN;
        Sum = 0 ; 
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j<m ;j++){
                Sum = Sum + a[i][j];

                // cout<<"SUM.  -> "<<Sum<<"\n";
                // Sum += fstCorner(i,j,n,m,a) + scnd(i,j,n,m,a)+ third(i,j,n,m,a)+last(i,j,n,m,a);
                // Sum += fstCorner(i,j) + scnd(i,j)+ third(i,j)+last(i,j);

                fstCorner(i-1,j-1) ;
                scnd(i-1,j+1);
                third(i+1,j-1);
                last(i+1,j+1);
                Sum+= sum1 + sum2 + sum3 + sum4;

                // cout<<"Sum : "<<Sum<<" sum1: "<<sum1<<" sum2: "<<sum2<<" sum3: "<<sum3<<" sum4: "<<sum4 <<"\n";
             
                MAX = max(MAX,Sum);
             
                // cout<<"MAX: : "<<MAX<<"\n\n\n\n";

                Sum = 0 , sum1 = 0 , sum2 = 0 ,sum3 = 0 , sum4 = 0 ; 

            }

        }
        // cout<<"\n\n\n\n\n"<<MAX<<"\n";
        cout<<MAX<<"\n";
      }

    return 0 ; 
}