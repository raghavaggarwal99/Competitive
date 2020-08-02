class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        int n=a.size();
        
        int minn=INT_MAX;
        int ans=0;
        
        for(int i=0; i<n; i++){
            
            if(a[i]<minn){
                minn=a[i];
            }
            if(a[i]-minn>ans){
                ans=a[i]-minn;
            }
            
        }
        
        return ans;
        
    }
};
