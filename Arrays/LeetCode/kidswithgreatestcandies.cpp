class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int b) {
        
        
        vector<bool> ans;
        
        
        
        
        int maxx=INT_MIN;
        
        for(int i=0; i<a.size(); i++){
            
            if(a[i]>maxx){
                maxx=a[i];
            }
            
            
        }
        
        for(int i=0; i<a.size(); i++){
            
            if(a[i]+b>=maxx){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
            
            
        }
        
        
        return ans;
        
        
    }
};
