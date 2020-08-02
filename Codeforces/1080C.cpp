#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}
 
int min(int a,int b){
    if(a>b)
    return b;
    else
    return a;
}
 
int main()
{
    
     int t;
     
     cin>>t;
     while(t--)
     {
         long long int n,m;
      cin>>n>>m;
      //if(n<m) {swap(n,m);}
      
      long long int  b;
      b = (n*m)/2;
    
   
    long long int  x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;
    x5=max(x1,x3);
    x6=min(x2,x4);
    y5=max(y1,y3);
    y6=min(y2,y4);
 
    long long int  b1=(x2-x1+1)*(y2-y1+1)/2;
    if((x1+y1)%2==1&&(x2-x1+1)%2==1&&(y2-y1+1)%2==1)
        b1++;
        
    long long int  a2=(x4-x3+1)*(y4-y3+1)/2;
    if((x3+y3)%2==0&&(x4-x3+1)%2==1&&(y4-y3+1)%2==1)
        a2++;
    
    
    long long int  b3=0;
    if(x6>=x5&&y6>=y5)
    {
        b3=(x6-x5+1)*(y6-y5+1)/2;
        if((x5+y5)%2==1&&(x6-x5+1)%2==1&&(y6-y5+1)%2==1)
        b3++;
    }
    
    b+=a2+b3-b1;;
    long long int  w=m*n-b;
    cout<<w<<" "<<b<<endl;;
    }
     
    
    return 0;
}
