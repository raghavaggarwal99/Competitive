#include <bits/stdc++.h> 
#include<string.h>
using namespace std; 

int main(){
  
    
  int n; 
    cin>>n;
    
    int *present = new int[n];
    int *canOpen = new int[n];

    for(int k = 0; k < n; k++){
        cin>>present[k]>>canOpen[k];
    }
    
    int total=(n);
    for(int k = 0; k < n; k++){
        for(int m = 0; m < n; m++){
            
            if(m == k){continue;}
            if(canOpen[k] == present[m]){--total; present[m] = 0;}
        }
    }
        
    cout<<total<<endl;
    return 0;
    
    
}
