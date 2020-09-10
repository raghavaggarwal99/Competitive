class Solution {
public:
   int maxSubArray(vector<int>& nums) 
    {
        int max_current, max_global;
       
        max_current = max_global = nums[0];
       
        int sz = nums.size();
       
        for( int i = 1; i < sz; i++ )
        {
            max_current = max ( nums[i], max_current + nums[i]);
            
            if( max_current > max_global )
                max_global = max_current;
        }
       
       
        return max_global;
    }
    
    
};
