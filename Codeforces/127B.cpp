#include <bits/stdc++.h>
#include<unordered_map>
#include<algorithm>
#include <iomanip>
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
 
unordered_map<int,int> x;
unordered_map<int,int> y;
int count=0;
 
    int *a=new int[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        x[a[i]]++;
 
        if(x[a[i]]>=4){
            count++;
            x[a[i]]=0;
        }
 
    }
 
 
 
 
    for(int i=1; i<=100; i++){
 
       y[x[i]]++;
    }
 
    
 
     int p=y[2]/2;
    count+=p;
 
    y[2]=y[2]-p*2;
 
    p=y[3]/2;
    count+=p;
 
    y[3]=y[3]-p*2;
 
if(y[2]==1 && y[3]==1){
    count++;
}
 
cout<<count<<endl;
 
 
 
}
