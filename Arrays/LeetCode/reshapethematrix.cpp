class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        
        
        vector<int> a(c);
            
         vector<vector<int>> res(r,a);
        
        if (nums.size() == 0 || r * c != nums.size() * nums[0].size())
            return nums;
        int rows = 0, cols = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[0].size(); j++) {
                res[rows][cols] = nums[i][j];
                cols++;
                if (cols == c) {
                    rows++;
                    cols = 0;
                }
            }
        }
        
        
        return res;
        
        
        
    }
};
