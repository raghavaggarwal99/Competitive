class Solution {
public:
    int minTaps(int n, vector<int>& A) {
        
        
        vector<vector<int>> intervals;
        
        for(int i  = 0; i < A.size(); i++){
            intervals.push_back({i - A[i], i + A[i], i});
        }
        
        sort(intervals.begin(), intervals.end());
        
        
        
        
        
        int ans = 0;
        
        int cover = 0;
        
        int reach = 0;
        
        int i = 0;
        
        
        int index_where_tap=-1;
        
        while(true){
            
            bool found = false;
            
            while(i < intervals.size() && intervals[i][0] <= cover){
                
                // cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
                if(intervals[i][1]>reach){
                    reach=intervals[i][1];
                    
                    index_where_tap=  intervals[i][2];
                }

                i++;
                found = true;
                
            }
            
            if(!found){
                return -1;
            }
            
            ans++;
            // cout<<index_where_tap<<endl;
            
            if(reach >= n){
                return ans;
            }
            
            // cout<<reach<<endl;
            
            cover = reach;
        }
        
        
        
        return ans;
 
        
        
        
        
        
        
        
        
        
        
        
        
    }
};
