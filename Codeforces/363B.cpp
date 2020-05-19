#include<bits/stdc++.h>
using namespace std;


int main(){
   

    
 
       int n,k;
        cin>>n>>k;
        
        int *a=new int[n+1];
//         int m=0;
//         int *ans=new int[n];
    
        
        // unordered_map<int,int> x;
        
        a[0]=0;
    
        for(int i=1; i<=n; i++){
            cin>>a[i];
            
        }
        
       for(int i=1; i<=n; i++){
            a[i]=a[i]+a[i-1];    
        }
        
     // for(int i=0; i<=n; i++){
     //        cout<<a[i]<<" "; 
     //    }

    int ans=INT_MAX;
    int v=k-1;
    int index=-1;
    // cout<<endl;
        for(int i=1; i<=n-k+1; i++){
            // cout<<v+i<<" "<<i-1<<" "<<endl;
            long long int c=a[v+i]-a[i-1];
                // cout<<c<<endl;
            if(c<ans){
                ans=c;
                index=i;
            }
            
        }
        
    // cout<<ans<<endl;
    cout<<index<<endl;
        
        
        
    // }
    // return 0;
}
