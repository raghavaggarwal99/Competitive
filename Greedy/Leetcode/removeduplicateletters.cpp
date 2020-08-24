class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        int n = s.size();
        
        if (n <= 1) return s;
        
        
        vector<int> cnt(26, 0);
        
        
        vector<bool> visit(26, false);
        
        
        for (int i = 0; i < n; i ++){
            cnt[s[i] - 'a'] ++;
        }
        
        
        string res = "";
        
        for (int i = 0; i < n; i ++){
            
            cnt[s[i] - 'a'] --;
            
            if (visit[s[i] - 'a']){
                continue;
            }
            
            while (res.size() && s[i] < res.back() && cnt[res.back() - 'a']){
                
                visit[res.back() - 'a'] = false;
                
                res.pop_back();
            }
            
            res += s[i];
            visit[s[i] - 'a'] = true;
            
            
            cout<<res<<endl;
            
        }
        
        return res;
        
        
        
        
        
        
    }
};
