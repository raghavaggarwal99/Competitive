#include <bits/stdc++.h>
#include<vector>
using namespace std;
 
 
int main()
{
    
    long long int n;
    cin>>n;
 
    int *a=new int[n+2];
 
    vector<int> A;
 
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    a[0]=0;
 
    A.push_back(n);
   // cout<<A[0]<<endl;
 
    for(int i=n-1; i>=1; i--){
        int p=1;
        int v=0;
            for(int j=i+1; j<=n; j++){
                
                   if((a[j]-a[j-1])!=(a[p]-a[p-1])){
                       v=1;
                       break;
                   }
                   else{
                       p++;
                   }
 
            }
            if(v==0){
                A.push_back(i);
            }
    }
 
cout<<A.size()<<endl;
 
for(int i=A.size()-1; i>=0; i--){
    cout<<A[i]<<" ";
}
 
}
