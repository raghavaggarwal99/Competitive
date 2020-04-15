#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main()
{
 
vector<int> c;
vector<int> d;
 
unordered_map<int,int> x;
unordered_map<int,int> y;
 
 
int **a=new int*[8];
for(int i=0; i<8; i++){
    a[i]=new int[2];
 
    for(int j=0; j<2; j++){
        a[i][j]=0;
    }
}
 
  for(int i=0; i<8; i++){
      
      cin>>a[i][0]>>a[i][1];
 
      if(x[a[i][0]]==0){
          c.push_back(a[i][0]);
          
      }
      x[a[i][0]]++;
          if(x[a[i][0]]==3){
              x[a[i][0]]=0;
          }
 
      if(y[a[i][1]]==0){
          d.push_back(a[i][1]);
          
      }
      y[a[i][1]]++;
          if(y[a[i][1]]==3){
              y[a[i][1]]=0;
          }
 
  }
  
 
 
  sort(c.begin(), c.end());
  sort(d.begin(), d.end());
 
 
  long long int x2=c[1];
  long long int y2=d[1];
 
 
if(c.size()>3 || d.size()>3){
    cout<<"ugly"<<endl;
          return 0;
}
 
 
  for(int i=0; i<8; i++){
      if(a[i][0]==x2 && a[i][1]==y2){
          cout<<"ugly"<<endl;
          return 0;
      }
      
  }
 
  for(int i=0; i<8; i++)
  {
      for(int j=0; j<8; j++){
          if(i==j){
              continue;
          }
 
          if(a[i][0]==a[j][0] && a[i][1]==a[j][1]){
              cout<<"ugly"<<endl;
          return 0;
          }
      }
  }
 
 
 
cout<<"respectable"<<endl;
 
 
}
