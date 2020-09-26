class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        
        int n = position.size();
        if(n <= 1)
            return n;
        
        vector<pair<int, int>> v(n);
        
        for(int i = 0; i < n; i++){
            
            v[i] = {position[i], speed[i]};
            
        }
        
        
        sort(v.begin(), v.end());
        
//          for(int i = 0; i < n; i++){
            
//             cout<<v[i].first<<endl;
            
//         }
        
        
        int idx = n - 1, c = 1;
        
        
        
        for(int i = n - 1; i >= 0; i--){
            
            if((target - v[i].first) * (long long)v[idx].second > (target - v[idx].first) * (long long)v[i].second){
                
                c++;
                
                // cout<<i<<" " <<idx<<endl;
                
                idx = i;
                
                
            }
            
        }
        
        
        return c;
         
        
    }
};
