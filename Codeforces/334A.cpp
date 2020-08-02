#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
   int n;
   cin>>n;
 
int i=1;
int j=n*n;
 
 
 
   while(1){
 
       if(i>=j){
           break;
       }
 
        cout<<i<<" "<<j<<endl;
        i++;
        j--;
   }
   
 
 
}
