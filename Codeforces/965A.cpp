#include <iostream>
#include<unordered_map>
#include<queue>
using namespace std;
int main()
{
   
   long long int k,n,s,p;
   cin>>k>>n>>s>>p;
   
   int c=n/s;
    if(n%s!=0){
        c+=1;
    }
    //cout<<c<<endl;
    
    int h=((k*c)/p);
    if((k*c)%p!=0){
        h+=1;
    }
    cout<<h<<endl;
    
}
