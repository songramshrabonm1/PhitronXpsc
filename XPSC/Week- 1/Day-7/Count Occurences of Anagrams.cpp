//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int frqPat[26] = {0};
	   // set<char> s;
	    for(int i = 0 ; i<pat.size() ; i++){
	        
	        int a = pat[i]- 97;
	     
	        frqPat[a]++;
	    
	       // s.insert(pat[i]);
	    }
	    
	    
	    
	    int l = 0 , r = 0 , count = 0 ; 
	    while(r < txt.size()){
	       // if(s.count(txt[r]))
	       // {
	            int aa = txt[r] - 97;
	            frqPat[aa]--;
	       // }
	        if(r-l+1 == pat.size()){
	            
	            bool flag = true;
	            for(int i = 0 ; i<26 ; i++){
	                
	                if(frqPat[i] != 0){
	                    flag = false;
	                }
	            }
	            if(flag == true){
	                count++;
	            }
	            int aaa = txt[l]-97;
	           // if(s.count(aaa))
	            frqPat[aaa]++;
	            l++;
	            r++;
	            continue;
	        }
	        r++;
	        
	        
	        
	    }
	    return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends