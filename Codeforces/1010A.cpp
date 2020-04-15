#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
 
int main(){
 
  long long int n,m;
    cin>>n>>m;
  
    int *a=new int[n];
    int *b=new int[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    
    double num=1;
    double den=a[0];
    double sum=num/den;
    double count=num/den;
    for(int i=1; i<n; i++){
        
        num=num-count;
        den=b[i];
        sum+=num/den;
        count=num/den;
        //cout<<b[i]<<endl;
        
    
   // for(int i=1; i<n; i++){
        num=num-count;
        den=a[i];
        sum+=num/den;
        count=num/den;
    }
    num=num-count;
    den=b[0];
    sum+=num/den;
    //cout<<sum<<endl;
    if(sum==1){
        cout<<"-1"<<endl;
        return 0;
    }
    double x=((m*sum)/(1-sum));
    
    if(floor(x)>pow(10,9)){
       // cout<<x<<endl;
        cout<<"-1"<<endl;
        return 0;
        
    }
    // cout<< std::setprecision(10) << x<<endl;
    
    cout << std::setprecision(10) << ((m*sum)/(1-sum)) << '\n';
    
    
}
