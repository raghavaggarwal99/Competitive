class Solution {
public:
    int findLengthOfLCIS(vector<int>& a) {
        
        int count=1;
        
        
        if(a.size()==0){
            return 0;
        }
        
        int x=a[0];
        
        int ans=1;
        
        for(int i=1; i<a.size(); i++){
            
            if(a[i]>x){
                count++;
                x=a[i];
            }
            else{
                count=1;
                x=a[i];
            }
            
            if(count>ans){
                ans=count;
            }
            
        }
        
        return ans;
        
        
    }
};
