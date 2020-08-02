#include <bits/stdc++.h>
#include <iostream>
#include<unordered_map>
using namespace std;
 
int main () {
    
   long long int n,a,b;
   cin>>n;
 
long long int count=0;
 
if(n<=3 ){
    cout<<"NO"<<endl;
    return 0;
}
if(n==5){
    cout<<"YES"<<endl;
cout<<"5 - 3 = 2"<<endl;
cout<<"2 * 4 = 8"<<endl;
cout<<"1 + 2 = 3"<<endl;
cout<<"8 * 3 = 24"<<endl;
return 0;
}
 
    cout<<"YES"<<endl;
 
    if(n%2==0){
        for(int i=n; i>=5; i-=2){
            cout<<i<<" - "<<i-1<<" = "<<"1"<<endl;
            count++;
        }
         cout<<"1 * 2 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;
        for(int i=0; i<count; i++){
            cout<<"24 * 1 = 24"<<endl;
        }
 
    }
    else{
        cout<<"6 - 5 = 1"<<endl;
        cout<<"1 - 1 = 0"<<endl;
        for(int i=7; i<=n; i++){
            cout<<i<<" * "<<"0 = 0"<<endl;
        }
        cout<<"0 + 2 = 2"<<endl;
        cout<<"2 * 3 = 6"<<endl;
        cout<<"6 * 4 = 24"<<endl;
    }
 
 
   
 
}
 
