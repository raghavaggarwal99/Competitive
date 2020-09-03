class Solution {
public:
   const int MAX = 10000;
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        
        for(int i = 0; i < matrix.size(); i++)
            for(int j = 0; j < matrix[0].size(); j++)
                if(matrix[i][j])
                    matrix[i][j] = MAX;
        
        
//          for(int i = 0; i < matrix.size(); i++){
//             for(int j = 0; j < matrix[0].size(); j++){
                
//                 cout<<matrix[i][j]<<" ";
//             }
//              cout<<endl;
//         }
              
        
        
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j]){
                    // cout<<matrix[i][j]<<endl;
                    dfs(matrix, i, j);
                }
            }
    }
        
        
        return matrix;
        
    }
    
    
    int dfs(vector<vector<int>>& matrix, int r, int c)
    {
        
        if(r < 0 || c < 0 || r >= matrix.size() || c >= matrix[0].size() || matrix[r][c] == -1)
            return MAX;
        
        if(matrix[r][c] == 0 || matrix[r][c] == 1)
            return matrix[r][c];
        
        int temp = matrix[r][c];
        
        
        matrix[r][c] = -1;
        
        int left = dfs(matrix, r, c-1);
        int right = dfs(matrix, r, c+1);
        int down = dfs(matrix, r-1, c);
        int up = dfs(matrix, r+1, c);
        
        matrix[r][c] = min({temp, left + 1, right + 1, down + 1, up + 1});
        
        
        return matrix[r][c];
    }
};
