int max(int a, int b){
    if(a>b){
        return a;
    }
    
    return b;
}

#include <bits/stdc++.h> 
using namespace std;   
int main(){
    
    int t,n,m,r,c;
    cin>>t;
    
    for(int i=0; i<t; i++){
        cin>>n>>m>>r>>c;
        int up=r-1;
        int down=n-r;
        int right=m-c;
        int left=c-1;
        
        int v=max(c-1,max(m-c,max(r-1,n-r)));
        cout<<v<<endl;
        
        
        
        
    }
    
    
    
    
}
