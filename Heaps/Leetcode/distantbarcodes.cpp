class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        
        
        int n = barcodes.size();
        vector <int> ans;
        
        
        unordered_map <int, int> counts;
        
        
        for(int i=0; i<n; i++){
            counts[barcodes[i]]++;
        }
        
        
        priority_queue <pair<int, int>, vector <pair<int, int>>> pq;
        
        for(auto it: counts){
            pq.push({it.second, it.first});
        }
        
        
        for(int i=0; i<n; i=i+2){
            
            pair<int, int> maxm = pq.top();
            pq.pop();
            
            if(pq.empty()){
                ans.push_back(maxm.second);
                return ans;
            }
            
            
            pair<int, int> maxm2 = pq.top();
            pq.pop();
            
            
            ans.push_back(maxm.second);
            
            if(maxm2.first>0){
                ans.push_back(maxm2.second);   
            }
            
            pq.push({maxm.first-1,maxm.second});
            pq.push({maxm2.first-1, maxm2.second});
        }
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};
