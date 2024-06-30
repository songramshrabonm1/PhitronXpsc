#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int k;
	    cin>>k;
	    vector<long long int> c(n);
	    map<long long int,long long int>mp;
	    long long int cnt = 0 ; 
	    for(int i = 0 ; i<n ; i++){
	        cin>>c[i];
	        mp[c[i]%k]++;
	    }
	    vector<long long int> d(n);
	    for(int i = 0 ; i<n; i++){
	        cin>>d[i];
	        long long int val =( k -  (d[i] % k)) %k;
	        cnt+= mp[val];
	    }
	    
	    cout<<cnt<<"\n";
	    
	    
	}

}
