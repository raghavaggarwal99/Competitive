#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    
    long long int t,a;
    cin>>t;
    
    // int *a=new int[n];
    
    for(int i=0; i<t; i++){
        cin>>a;
        int count=0;
        vector<int> ans;
        
        while(a!=0){
            int b=a%10;
            // cout<<b<<endl;
            if(b==0){
                count++;
                a=a/10;
                continue;
            }
            else{
                long long int q=pow(10,count);
                ans.push_back(b*q);
                count++;
                a=a/10;
            }
        }
        
        cout<<ans.size()<<endl;
        for(int j=0; j<ans.size(); j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;
        
    }
    
   
    
    
    
}
