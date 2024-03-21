//{ Driver Code Starts

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int N, long long int K) {
                                                 
                                                 
        int l = 0 , r = 0 ;
        vector<long long int> v ;
        queue<int>q;
        int cnt = 0 ; 
        
        while(r<N){
            if(a[r] < 0 )
            q.push(a[r]);
            
            
            if(r-l+1 == K){
                
                
                if(q.empty()){
                    v.push_back(0);
                    
                }
                else{
                int top = q.front();
                v.push_back(top);
                if(a[l] == top){
                    q.pop();
                }
                l++;
                // if(r<=l && a[l]!=top){
                //     q.pop();
                // }
                // else if(a[l]!=top && a[r] != top){
                //     q.pop();
                // //     if(a[l] < 0){
                // //     q.push(a[l]);
                // // }
                // }
                
                r++;
                continue;
                // q.pop();
                }
                
                //cnt = 0 ; 
                l++;
                // if(a[l] < 0 ){
                //     int aa = a[l];
                //     q.push(aa);
                // }
                r++;
                continue;
            }
            r++;
        }
        return v;
                                                 
 }