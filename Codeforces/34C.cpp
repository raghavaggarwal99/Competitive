#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
  string str;
  cin>>str;
vector<int> a;
 
unordered_map<int,int> x;
 
  for(int i=0; i<str.length(); i++){
      if(str[i]==','){
        long long int v=1;
        long long int sum=0;
          for(int j=i-1; j>=0; j--){
              if(str[j]==','){
                  break;
              }
                str[j]=str[j]-48;
 
                sum+=v*str[j];
                v*=10;
                //cout<<sum<<endl;
 
          }
 
          a.push_back(sum);
 
 
      }
  }
long long int v=1;
long long int sum=0;
 
  for(int j=str.length()-1; j>=0; j--){
      if(str[j]==','){
          break;
      }
 
      str[j]=str[j]-48;
 
      sum+=v*str[j];
      v*=10;
 
  }
a.push_back(sum);
int max=0;
 
for(int i=0; i<a.size(); i++){
    x[a[i]]=1;
 
    if(a[i]>max){
        max=a[i];
    }
 
}
int i=0;
 
while(1){
if(i>max){
    break;
}
 
    if(x[i]==1){
            int count=0;
            int lastindex=i;
 
        for(int j=i+1; j<=max; j++){
            if(x[j]==0){
                break;
            }
            else{
                count++;
                lastindex=j;
            }
 
 
        }
 
        if(count<1 && i==max){
            cout<<i;
        }
        else if(count<1){
            cout<<i<<",";
        }
        else if(count>=1 && lastindex==max){
            cout<<i<<"-"<<lastindex;
        }
        else if(count>=1){
            cout<<i<<"-"<<lastindex<<",";
        }
        i=lastindex+1;
 
    }
    else
    i++;
}
 
 
  //cout<<a[3]<<endl;
    
}
 
