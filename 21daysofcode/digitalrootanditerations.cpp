#include <bits/stdc++.h> 
using namespace std; 
int main(){
    
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        long long int n;
        cin>>n;
        int sum=0;
        int count=0;
        while(1){
            if(n>=10){
                count++;
        while(n){
            sum+=n%10;
            n=n/10;
        }
            }
            else{
                sum+=n;
            }
            if(sum<10){
                cout<<sum<<" "<<count<<endl;
                break;
            }
            n=sum;
            sum=0;
        }
        
        
    }
    
    
}
