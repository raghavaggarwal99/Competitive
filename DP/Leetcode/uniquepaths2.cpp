class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& A) {
        
        int m=A.size();
        int n=A[0].size(); 
        
        
    int count[m][n]; 
  
    if(A[0][0]==1){
        return 0;
    }
        
        count[0][0]=1;
        
    for (int i = 1; i < m; i++){
        
        if(A[i][0]==0){
            count[i][0]=count[i-1][0];
        }
        
        else if(A[i][0]==1){
            count[i][0] = 0; 
        }
    }
        

     for (int i = 1; i < n; i++){
        
        if(A[0][i]==0){
            count[0][i]=count[0][i-1];
        }
        
        else if(A[0][i]==1){
            count[0][i] = 0; 
        }
    }
  
  

 
    for (int i = 1; i < m; i++) { 
        for (int j = 1; j < n; j++) 
  
            if(A[i][j]==0){
                
                count[i][j] = count[i - 1][j] + count[i][j - 1];
            }

            else if(A[i][j]==1){
                count[i][j] = 0; 
            }

           
    } 
        
        
        
        
        
        
    return count[m - 1][n - 1]; 
        
        
    }
};



