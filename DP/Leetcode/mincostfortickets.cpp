class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        vector<int> dp(366,0);
        
        set<int> store;
        int o,s,m;
        
        int size = days.size();
        
        for(int i=0;i<size;i++)
            store.insert(days[i]);
        
        
        for(int i=1;i<=365;i++){
            if(store.find(i) == store.end()){
                dp[i] = dp[i-1];
                continue;   
            }
            
            o = i-1>0 ? dp[i-1] : 0;
            s = i-7>0 ? dp[i-7] : 0;
            m = i-30>0 ? dp[i-30] : 0;
            
            dp[i] = min(min(o+costs[0],s+costs[1]),m+costs[2]);
        }
        
        
        return dp[days[size-1]];
        
        
        
        
        
    }
};
