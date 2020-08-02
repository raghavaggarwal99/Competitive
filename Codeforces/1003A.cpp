#include <iostream>
#include<unordered_map>
#include<climits>
using namespace std;
 
int main()
{
int n;
cin>>n;
int *a=new int[n];
int max=0;
int min=INT_MAX;
 
unordered_map<int,int> x;
for(int i=0; i<n; i++){
    cin>>a[i];
    x[a[i]]++;
    
    if(a[i]>max)
    max=a[i];
    
    if(a[i]<min)
    min=a[i];
    
}
 
int count=0;
 
while(1){
    
    int v=0;
    
    for(int i=min; i<=max; i++){
        
        if(x[i]==0)
        continue;
        else{
            
            x[i]--;
            v=1;
           
            
        }
        
    }
    
    if(v==0)
    break;
    else
    count++;
    
    
    
    
}
cout<<count<<endl;
    
}
