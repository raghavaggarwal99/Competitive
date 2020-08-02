#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
int max(int a, int b){
    if(a>b){
        return a;
    }
    else
    return b;
}
 
int main()
{
    
    long long int n;
    cin>>n;
 
    int *a=new int[n];
    int m=0;
    long long int sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>m){
            m=a[i];
        }
        sum+=a[i];
    }
 
    int x= (2*sum)/n;
 
    if(((2*sum)/n)!=0){
        x++;
    }
 
 
    cout<<max(m, x)<<endl;
 
 
 
 
 
 
 
 
 
}
