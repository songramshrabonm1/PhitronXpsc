//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int l = 0 , r = 0 ;
        long long int sum = 0 ; 
        long long int Max = 0 ; 
        while(r<Arr.size()){
        while(r-l+1 <= K ){
            sum+= Arr[r];
            r++;
        }
        Max = max(Max,sum);
        sum-=Arr[l];
        l++;
        }
        return Max;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends