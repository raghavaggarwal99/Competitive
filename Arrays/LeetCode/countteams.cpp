class Solution {
public:
    int numTeams(vector<int>& A) {
        
        int n=A.size();
        long long int count=0;
        
        
        if(n<3){
            return 0;
        }
        
        for(int i=0; i<=n-3; i++){
            
            
            for(int j=i+1; j<=n-2; j++){
                
                
                for(int k=j+1; k<=n-1; k++){
                    
                    if(A[i]>A[j] && A[j]>A[k]){
                        // cout<<A[i]<<" "<<A[j]<<" "<<A[k]<<endl;
                        count++;
                    }
                    else if(A[i]<A[j] && A[j]<A[k]){
                        // cout<<A[i]<<" "<<A[j]<<" "<<A[k]<<endl;
                        count++;
                    }
                    
                    
                }
                
            }
            
        }
        
        return count;
        
        
        
        
        
        
        
        
    }
};
