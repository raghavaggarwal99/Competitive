#include<unordered_map>
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int n,v1,v2;
   cin>>n>>v1>>v2;
 
    double *a=new double[n];
 
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
 
    double x,y;
    cin>>x>>y;
double min=INT_MAX;
int ans=0;
 
    for(int i=1; i<n; i++){
 
        double bustime=(a[i]/v1);
        //cout<<bustime+time<<endl;
 
 
        double distance=sqrt((x-a[i])*(x-a[i]) + y*y);
 
            double time=distance/v2;
           // cout<<bustime+time<<endl;
 
            if(bustime+time<=min){
                min=bustime+time;
                ans=i;
            }
 
 
    }
 
cout<<ans+1<<endl;
 
 
 
}
