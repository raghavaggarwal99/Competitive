class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        
         int n = s.size();
        int l = p.size();
        
        vector<int> ans;
        
        vector<int> vp(26, 0);
        
        vector<int> vs(26, 0);
        
        for (char c : p) ++vp[c - 'a'];
        
        for (int i = 0; i < n; i++)
        {
            if (i >= l) --vs[s[i - l] - 'a'];
            
            ++vs[s[i] - 'a'];
            
            if (vs == vp) ans.push_back(i - l + 1);
            
        }
        
        return ans;
        
        

        
    }
};
