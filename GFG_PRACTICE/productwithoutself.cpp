class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        
        vector<int> ans;
        
        long long int sum=1;
        int count=0;
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==0){
                count++;
                continue;
            }
            sum*=a[i];
        }
        
        if(count>1){
            sum=0;
        }
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==0 && count==1){
                ans.push_back(sum);
            }
            else if(count>=1){
               ans.push_back(0); 
            }
            else{
                ans.push_back(sum/a[i]);
            }
        }
        
        return ans;
        
        
        
        
    }
};
