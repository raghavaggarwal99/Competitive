int Solution::solve(vector<int> &A, int B) {
    
    
    int n=A.size();
    

    int ans=0;
    int i=0;
    int t=0;
   
    
    while(i<n){
        
        int check=0;
        for(int j= i+B-1; j>=t; j--){
            
            
            if(A[j]==1){
                ans++;
                t=j+1;
                i=j+B;
                check=1;
                break;
            }
            
        }
        
         if(i>=n){
            return ans;
        }
        
        
        if(check==0){
            return -1;
        }
       
        
    }
    
    
}

