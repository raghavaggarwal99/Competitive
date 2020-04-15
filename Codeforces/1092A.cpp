#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
 
  long long int t;
  cin>>t;
 
  for(int i=0; i<t; i++){
      long long int a,b;
      cin>>a>>b;
long long int count=0;
int v=0;
 
        while(1){
                for(char j='a'; j<=('a'+b-1); j++){
                    if(count==a){
                        v=1;
                        break;
                    }
                    cout<<j;
                    count++;
                }
               
                if(v==1){
                    break;
                }
 
        }
         cout<<endl;
 
 
 
  }
 
}
