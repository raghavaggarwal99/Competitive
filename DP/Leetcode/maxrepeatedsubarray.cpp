class Solution {
public:
    int findLength(vector<int>& X, vector<int>& Y) {
        
        
        //Longest Common subsequence
       int m=X.size();
        
        int n=Y.size();
        
        
    int LCSuff[m+1][n+1]; 
        
    int result = 0;  
        
        
    for (int i=0; i<=m; i++) 
    { 
        for (int j=0; j<=n; j++) 
        { 
  
            if (i == 0 || j == 0) 
                LCSuff[i][j] = 0; 
  
            else if (X[i-1] == Y[j-1]) 
            { 
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1; 
                result = max(result, LCSuff[i][j]); 
            } 
            else LCSuff[i][j] = 0; 
        } 
    } 
        
        
    return result; 
        
        
        
        
        
    }
};
