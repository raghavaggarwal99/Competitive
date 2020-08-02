class Solution {
public:
    
    int sum(int n){
        
        int s=0;
        
        while(n!=0){
            int b=n%10;
            s+=b;
            n=n/10;
        }
        
        return s;
        
        
        
    }
    
    int countLargestGroup(int n) {
        
        
        unordered_map<int,int> x;
        
        int maxx=-1;
        for(int i=1; i<=n; i++){
            
            int v=sum(i);
            x[v]++;
            
            if(x[v]>maxx){
                maxx=x[v];
            }
            
        }
        
        int count=0;
        
        for(int i=1; i<=81; i++){
            if(x[i]==maxx){
                count++;
            }
        }
        
        return count;
        
        
        
    }
};
