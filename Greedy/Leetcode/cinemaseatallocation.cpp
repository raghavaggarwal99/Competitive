class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reserved) {
        
        unordered_map<int, vector<int>> vmap;
        
        for (int i = 0; i < reserved.size(); i++)
            vmap[reserved[i][0]].push_back(reserved[i][1]);
        
        
        int res = 0;
        
        unordered_map<int, vector<int>> :: iterator it;
        
        for (it = vmap.begin(); it != vmap.end(); it++) {
            
            vector<int> v = it->second;
            
            int count1 = 0;
            
            for (int i = 2; i <= 5; i++) {
                
                if (find(v.begin(), v.end(), i) == v.end()){
                    count1++;
                }
                
                else break;
            }
            
            if (count1 == 4) res++; 
            
            int count2 = 0;
            
            for (int i = 6; i <= 9; i++) {
                if (find(v.begin(), v.end(), i) == v.end()) count2++;
                else break;
            }
            
            if (count2 == 4) res++;
            
            if (count1 != 4 && count2 != 4) {
                
                count2 = 0;
                
                for (int i = 4; i <= 7; i++) {
                    if (find(v.begin(), v.end(), i) == v.end()) count2++;
                    else break;
                }
                
                if (count2 == 4) res++;
            }
        }
        
        //those rows with 0 reserved
        res += (2 * (n - vmap.size()));
        
        return res;
        
        
        
        
        
        
        
        
        
    }
};
