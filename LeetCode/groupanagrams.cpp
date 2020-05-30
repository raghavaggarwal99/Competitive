class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        
        unordered_map<string,int> x;
        
        
        
        int count=1;
        
        for(int i=0; i<s.size(); i++){
            
            string copy=s[i];
            
            sort(copy.begin(), copy.end());
            
            if(x[copy]==0){
                x[copy]=count;
                    count++;
            }
            
        }
        vector<vector<string>> ans(count-1);
        
        for(int i=0; i<s.size(); i++){
            
            string copy=s[i];
            
            sort(copy.begin(), copy.end());
            
           int z=x[copy];
            
            ans[z-1].push_back(s[i]);
            
        }
        
        return ans;
        
        
    }
};
