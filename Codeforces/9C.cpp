#include <iostream>  
    using namespace std;  
    int n;  
    int ans;  
    void f(int x){  
       if(x>n) 
       return ;
         
       ans++;  
       f(x*10);  
       f(x*10+1);  
    }  
    int main(){  
       cin>>n;  
       ans=0;  
       f(1);  
       cout<<ans<<endl;  
    }  
