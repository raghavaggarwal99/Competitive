class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int> x;
        
        int ans=0;
        int count=0;
        
        int i=0;
        
        while(i<s.length()){
            
            if(x.find(s[i]) != x.end()){
                
                if(count>ans){
                    ans=count;
                }
                count=0;
                
                i=x[s[i]]+1;
                
                x.clear();
                
            }
            else{
                // cout<<s[i]<<endl;
                x[s[i]]=i;
                count++;
                i++;
            }
            // cout<<count<<endl;
            
            
        }
        
        ans=max(ans, count);
        
        
        return ans;
        
        
        
        
        
        
        
    }
};
