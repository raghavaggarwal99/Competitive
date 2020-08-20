class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        
        
        vector<int> ans(3);
        
          int* W = new int[nums.size() - k + 1];
        int currSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            currSum += nums[i];
            if (i >= k) {
                currSum -= nums[i - k];
            }
            if (i >= k - 1) {
                W[i - k + 1] = currSum;
            }
        }
        
        
        
//          for (int i = 0; i <nums.size() - k + 1; i++) {
          
//              cout<<W[i]<<" ";
//         }
        
//         cout<<endl;

        int *left = new int[nums.size() - k + 1];
        
        
        int best = 0;
        for (int i = 0; i < nums.size() - k + 1; i++) {
            if (W[i] > W[best]) best = i;
            left[i] = best;
        }

        int* right = new int[nums.size() - k + 1];
        best = nums.size() - k;
        
        for (int i = nums.size() - k ; i >= 0; i--) {
            if (W[i] >= W[best]) {
                best = i;
            }
            right[i] = best;
        }
        
//         for (int i = 0; i <nums.size() - k + 1; i++) {
          
//              cout<<left[i]<<" ";
//         }
        
//         cout<<endl;
        
//           for (int i = 0; i <nums.size() - k + 1; i++) {
          
//              cout<<right[i]<<" ";
//         }
        
//         cout<<endl;
        
        ans[0]=-1;
         ans[1]=-1;
         ans[2]=-1;
        
        for (int j = k; j < nums.size() - k + 1 - k; j++) {
            
            int i = left[j - k], l = right[j + k];
            if (ans[0] == -1 || W[i] + W[j] + W[l] > W[ans[0]] + W[ans[1]] + W[ans[2]]) {
                ans[0] = i;
                ans[1] = j;
                ans[2] = l;
            }
        }
        
        
        return ans;
        
        
        
        
        
        
        
    }
};
