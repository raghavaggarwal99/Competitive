#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
 
    int *a=new int[n+1];
    long long int ans=0;
 
    vector<int> x;
    vector<int> y;
 
    for(int i=0; i<n; i++){
        cin>>a[i];
 
        if(a[i]%2==0){
           
            x.push_back(a[i]);
        }
        else{
           
            y.push_back(a[i]);
        }
 
    }
if(n==1){
    cout<<"0"<<endl;
    return 0;
}
 
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
 
    int m=min(x.size(),y.size());
 
int index1=x.size()-1;
int index2=y.size()-1;
 
index1-=m;
index2-=m;
 
if(index1==index2){
    cout<<"0"<<endl;
    return 0;
}
else if(index1>index2){
    for(int j=0; j<index1; j++){
        ans+=x[j];
    }
    cout<<ans<<endl;
    return 0;
}
else if(index1<index2){
    for(int j=0; j<index2; j++){
        ans+=y[j];
    }
    cout<<ans<<endl;
    return 0;
}
   
 
 
}
