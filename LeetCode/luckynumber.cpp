class Solution {
public:
    int findLucky(vector<int>& a) {
        
        
        unordered_map<int,int> x;
        
        for(int i=0; i<a.size(); i++){
            x[a[i]]++;
        }
        
        int ans=0;
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==x[a[i]]){
                if(a[i]>ans){
                    ans=a[i];
                }
            }
        }
        
        if(ans!=0){
            return ans;
        }
        
        return -1;
        
    }
};
