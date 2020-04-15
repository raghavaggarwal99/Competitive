#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    else
    return b;
}
 
int main()
{
  
    long long int n,x,y;
    cin>>n>>x>>y;
 
    int *a=new int[n];
 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
 
 
    if(x>y){
        cout<<n<<endl;
        return 0;
    }
 
sort(a,a+n);
 
int count=0;
 
for(int i=0; i<n; i++){
 
    if(a[i]>x){
        break;
    }
 
    count++;
 
    for(int j=n-1; j>i;j-- ){
 
        if(a[j]>x)
        continue;
 
        else{
            a[j]=a[j]+y;
            break;
        }
    }
 
}
 
 
cout<<count<<endl;
 
 
   
 
}
