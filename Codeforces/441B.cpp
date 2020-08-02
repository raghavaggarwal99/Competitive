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
    
    
    int n,v;
    cin>>n>>v;
    
    
    int *a=new int[n];
    int *b=new int[n];
    
    
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    
    
    
int fromLastDays = 0;
 
    int ans = 0;
                 
    for(int day = 1; day <= 3001; day++) {
        int curDay = 0;
 
        for(int i=0; i<n; i++){
            if (a[i] == day)
                curDay += b[i];
        }
        
        
        if (curDay + fromLastDays <= v) {
            ans += fromLastDays + curDay;
            fromLastDays = 0;
        } else {
            ans += v;
 
            int tv = v - fromLastDays;
            // If negative that means, the time to collect them has gone
            if (tv < 0) tv = 0;
            
                    fromLastDays = curDay - tv;
         }    
    }
 
    cout << ans << endl;
        
        
    // }
    // return 0;
}
