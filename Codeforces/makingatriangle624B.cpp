#include <bits/stdc++.h> 
using namespace std; 

int main(){
   long long int n;
    cin>>n;
    
    long long int *a=new long long int[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    
    unordered_map<long long int,long long int> x;
    
    long long int count=0;
    
    for(int i=n-1; i>=0; i--){
        if(x[a[i]]==0){
            count+=a[i];
            x[a[i]]=1;
        }
        else{
            while(1){
                if(a[i]==0){
                    break;
                }
                if(x[a[i]]==0){
                      count+=a[i];
                    x[a[i]]=1;
                    break;
                }
                else{
                    a[i]--;
                }
            }
        }
    }
    
    cout<<count<<endl;
    
    
    
}
