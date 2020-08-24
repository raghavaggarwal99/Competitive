class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        
        
        int start=0;
        
        
        for(int i=0; i<t.length(); i++){
            
            if(t[i]==s[start]){
                start++;
            }
            else{
                continue;
            }
            
            
        }
        
        
        if(start==s.length()){
            return 1;
        }
        
        return 0;
        
        
        
        
        
    }
};
