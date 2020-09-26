class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        
        if(target<=startFuel){
            return 0;
        }
        
        
        
        priority_queue<pair<int,int>> pq;
        
        
        int i=0,ans=0;
        
            int n=stations.size();
        
        while(i<n || !pq.empty()){
            
            while(i<n && stations[i][0]<=startFuel){
                
                pq.push(make_pair(stations[i][1],stations[i][0]));
                
                i++;
                
            }
            
            if(!pq.empty()){
                
                if(startFuel+pq.top().first>=target){
                    return ans+1;
                }
                
                else{
                    startFuel+=pq.top().first;
                    
                    ans++;
                    
                    pq.pop();
                }
            }
            
            
            else return -1;
        }
        
        return -1;
    }
        
        
    
        
        

};
