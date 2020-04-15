#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
 
int main()
{
  int n;
  cin>>n;
  int *a=new int[n+1];
  unordered_map<int,int> x;
 
  for(int i=1; i<=n; i++){
      cin>>a[i];
      x[a[i]]=i;
  }
 
  for(int i=1; i<=n; i++){
      cout<<x[i]<<" ";
  }
 
 
 
 
}
