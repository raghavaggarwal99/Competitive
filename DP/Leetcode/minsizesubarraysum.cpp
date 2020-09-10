class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        
        int n = nums.size(), i, j, sum = 0, ans = n+2 ;
        i = j = 0;
        
        
        while(i<n && j<n)
        {
            while(j<n && sum<s)
            {
                sum += nums[j] ;
                j++ ;
            }
            
            while(i<=j && sum>=s)
            {
                if(ans>(j-i))ans = (j-i);
                sum -= nums[i];
                i++;
            }
            
        }
        
        
        
        return ans * (ans!=n+2) ;
        
        
        
        
    }
};
