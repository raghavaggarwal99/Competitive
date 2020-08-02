#include<bits/stdc++.h>
using namespace std;

long long int digits(int n){
    
    int sum=0;
    
    while(n!=0){
        int b=n%10;
        sum+=b;
        n=n/10;
        
    }
    
    return sum;
    
    
}




int main(){

       int a,b,c;
        cin>>a>>b>>c;
        vector<int> ans;
    
    for(int i=1; i<=81; i++){
        
        long long int x=pow(i,a);
        long long int v=b*x+c;
        
       
        if(v>=1000000000){
            continue;
        }
        if(digits(v)==i){
            ans.push_back(v);
        }
        
        
        
        
    }
    
    cout<<ans.size()<<endl;
    
    
    if(ans.size()!=0){
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
    }
        
        
    // }
    // return 0;
}
