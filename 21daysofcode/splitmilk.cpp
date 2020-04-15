#include <bits/stdc++.h> 
using namespace std;   
int main(){
    
    int t,n;
    cin>>t;
    
    for(int j=0; j<t; j++){
        cin>>n;
     
        int *a=new int[n];
        int *b=new int[n];
        for(int i=0;i <n; i++){
            cin>>b[i];
        }
        for(int i=0;i <n; i++){
            cin>>a[i];
        }
        
        int sum=0;
        for(int i=1; i<n; i++){
            a[i]=a[i]+a[i-1];
            if(a[i]>b[i]){
                sum+=a[i]-b[i];
                a[i]=b[i];
            }
        }
        
        cout<<a[n-1]<<" "<<sum<<endl;
        
        
    }
    
    
    
}
