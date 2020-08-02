#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
   long long int n,x;
   cin>>n>>x;
 
    long long int count=0;
    long long int sum=x;
 
    for(int i=0; i<n; i++){
        char c;
        long long int v;
        cin>>c>>v;
 
        if(c=='+'){
            sum+=v;
        }
        else if(c=='-'){
            if(sum>=v){
                sum-=v;
            }
            else{
                count++;
            }
        }
 
 
    }
cout<<sum<<" "<<count<<endl;
 
 
}
