#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 


int main(){
  
  long long int n,m,a,b,ans;
    cin>>n>>m>>a>>b;
    
    int mridescost=m*a;
    
    if(mridescost<=b){
        cout<<a*n<<endl;
    }
    else{
        int rem=n%m;
        int div=n/m;
        if(rem!=0){
            ans=(div+1)*b;
        }
        
        long long int q=div*b+rem*a;
        cout<<min(q,ans);
    }
   
    
}
    

