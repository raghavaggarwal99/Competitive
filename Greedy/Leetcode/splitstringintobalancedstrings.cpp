class Solution {
public:
    int balancedStringSplit(string s) {
        
        
        int count=0;
        int ans=0;
        
        
        if(s.length()==0){
            return 0;
        }
        
        
        
        
        
        for(int i=0; i<s.length(); i++){
            
            if(s[i]=='L'){
                count++;
            }
            else if(s[i]=='R'){
                count--;
            }
            
            if(count==0){
                ans++;
            }
            
            
        }
        
        
        
        
        return ans;
        
        
        
    }
};
