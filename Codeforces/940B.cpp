#include <bits/stdc++.h>
 
using namespace std;
int min(int a, int b){
    if(a<b)
    return a;
    return b;
}
 
int main()
{
    long long int n,k,a,b;
    cin>>n>>k>>a>>b;
 
long long int sum=0;
 
if(k==1){
    cout<<(n-1)*a<<endl;
    return 0;
}
 
 
    while(1){
 
        int v=n/k;
   
if(v==0){
    sum+=(n-1)*a;
    break;
}
 
        if(n%k==0){
            long long int x=b;
            long long int y=(n-v)*a;
            sum+=min(x,y);
            n=n/k;
        }
        else{
            long long int diff=n-k*v;
                n=n-diff;
            sum+=diff*a;
        }
        //cout<<n<<endl;
 
        
 
 
        if(n<=1)
        break;
 
        
 
    }
 
    cout<<sum<<endl;
 
}
