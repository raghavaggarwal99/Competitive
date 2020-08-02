#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    long long int n,m,d;
    cin>>n>>m;
 
if(m>n){
    cout<<"-1"<<endl;
    return 0;
}
 
 
    if(n%2==0){
        d=n/2;
        if(d%m==0){
            cout<<d<<endl;
        }
        else{
            int i=1;
            while(1){
                if((d+i)%m==0){
                    cout<<d+i<<endl;
                    return 0;
                }
                i++;
            }
        }
        return 0;
    }
    else{
        d=n/2 +1;
            if(d%m==0){
            cout<<d<<endl;
        }
            else{
            int i=1;
            while(1){
                if((d+i)%m==0){
                    cout<<d+i<<endl;
                    return 0;
                }
                i++;
            }
        }
 
    }
 
 
   
}
