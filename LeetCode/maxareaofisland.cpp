class Solution {
public:
    
    bool seen[50][50];
    
    
     int area(int r, int c,vector<vector<int>>& grid) {
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() ||
                seen[r][c] || grid[r][c] == 0)
            return 0;
        seen[r][c] = true;
        return (1 + area(r+1, c,grid) + area(r-1, c,grid)
                  + area(r, c-1,grid) + area(r, c+1,grid));
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        
        // seen = new boolean[grid.length][grid[0].size()];
        int ans = 0;
        for (int r = 0; r < grid.size(); r++) {
            for (int c = 0; c < grid[0].size(); c++) {
                ans = max(ans, area(r, c,grid));
            }
        }
        return ans;
        
    }
};


 

   
