//THe question is basically whether we from i we can reach a[i]
 
#include<iostream>
#include<bits/stdc++.h>
#include <iomanip> 
using namespace std;
 
int main()
{
 
    string str1;
    string str2;
    cin>>str1>>str2;
 
    int n = str2.length(); 
  
    for (int i = 0; i < n / 2; i++) 
        swap(str2[i], str2[n - i - 1]);
 
     for(int i=0; i<n; i++){
         if(str1[i]!=str2[i]){
             cout<<"NO"<<endl;
             return 0;
         }
     }   
 
cout<<"YES"<<endl;
 
}
