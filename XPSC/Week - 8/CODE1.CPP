 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     
     int n ;
     cin>>n;
     
        int count = 0 ;
        int sum = 0 ;
         vector<int> v;
         
         if(n%2 != 0 ){
             
             if(n == 3){
                 cout<<1<<endl;
                 cout<<3<<endl;
             }else{
             
            count = 2 ;
            sum = 5;
            v.push_back(2);
            v.push_back(3);
            if(sum == n){
                cout<<count<<endl;
                cout<<2<<" "<<3<<endl;
            }else{
              int  N = n-sum;
                while(N!= 0 ){
                     count++;
                     sum+=2;
                     N-=2;

                     v.push_back(2);
                }

                cout<<count<<endl;
                for(int i : v){
                    cout<<i<<" ";
                }
                
                
            }
            

            }

         }else{
            
            while(n != sum){
                sum+= 2 ;
                count++;

            }

            cout<<count<<endl;
            while(count!=0){
                cout<<2<<" ";
                count--;
            }


         }
         
 }
 