#include<iostream>
#include<vector>
using namespace std;
const int N = 2e5+5;
 int n;
vector<int>v[N];
bool Visit[N];
long long CountLeaf[N];
int cn = -1;
void count(int src){
    
    Visit[src] = true;
    long long int ans = 0 ; 
    if(v[src].size() == 1 &&  src!= 1){
        CountLeaf[src] = 1;
    }
    else{
        for(int child : v[src]){
            if(Visit[child] == false){
                count(child);
                CountLeaf[src]+=CountLeaf[child];

            }
        }
    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(v,0,sizeof(v));
        memset(Visit,false,sizeof(Visit));
       
        cin>>n;
        int N = n-1;
        while(N--){
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        cn = -1;
        count(1);
        int q;
        cin>>q;
        while(q--){
            int a,b;
            cin>>a>>b;
            cout<<CountLeaf[a]*CountLeaf[b]<<"\n";
        }
    }
}