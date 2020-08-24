class Solution {
public:
    
    void dfs(int i, int j, vector<vector<char>>& A){
        
      if(i<0 || i>=A.size() || j<0 || j>=A[i].size()){
          return;
      }
        
        if(A[i][j]!='1'){
            return;
        }
        
        A[i][j]='0';
        
        dfs(i+1,j,A);  
        dfs(i,j+1,A);  
        dfs(i-1,j,A);  
        dfs(i,j-1,A);  
        

    }
    
    int numIslands(vector<vector<char>>& A) {
        
        
        int count=0;
        
        int n=A.size();
        
        
              
        if(n==0){
            return count;
        }
        
        int m=A[0].size();
        
    
        
        
        for(int i=0; i<n; i++){
            
            for(int j=0; j<m; j++){
                // cout<<A[i][j]<<endl;
                if(A[i][j]=='1'){
                    dfs(i,j, A);
                    count++;
                }
                
            }
            
        }
        
        
        return count;
        
        
        
        
        
    }
};
