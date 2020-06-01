class Solution {
public:
    int firstUniqChar(string s) {
        
         unordered_map<char, int> x ;
        int n = s.length();
        
        
        for (int i = 0; i < n; i++) {
           x[s[i]]++;
        }
        
        // find the index
        for (int i = 0; i < n; i++) {
            if (x[s[i]]==1) 
                return i;
        }
        return -1;
        
        
        
    }
};
