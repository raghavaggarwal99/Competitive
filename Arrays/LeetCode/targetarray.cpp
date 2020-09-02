class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++){
            
            int v=index[i];
            int y=nums[i];
            
            ans.insert(ans.begin()+v, y);
            
            
            
        }
        
        return ans;
        
        
        
    }
};
