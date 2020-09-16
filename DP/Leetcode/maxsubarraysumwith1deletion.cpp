class Solution {
public:
    int maximumSum(vector<int>& a) {
        
        
        int n=a.size();
        
        if(n==0){
            return 0;
        }
        
        
        int max_el = *max_element(a.begin(), a.end());
        
        int sum=0;
        
        int ans=INT_MIN;
        
        int max_del=0;
    
        
        for(int i=0; i<n; i++){
            
            max_del= max(sum, max_del+a[i]);
            
            sum+=a[i];
            
            if(sum<0){
                sum=0;
            }
            
            ans=max(ans, max_del);

        }
        
        
        if(max_el<0){
            return max_el;
        }
        
        return ans;
        
        
        
        
        
    }
};
