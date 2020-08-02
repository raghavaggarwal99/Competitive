#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main()
{
   long long int n;
   cin>>n;
 
    long long int *a=new long long int[n];
 
    unordered_map<int,int> x;
 
int max=0;
int ans=0; 
 
    for(int i=0; i<n; i++){
        cin>>a[i];
        x[a[i]]++;
 
        if(x[a[i]]>max){
            ans=a[i];
            max=x[a[i]];
        }
    }
 
    cout<<n-max<<endl;
 
    
 
 
 
 
 
}
