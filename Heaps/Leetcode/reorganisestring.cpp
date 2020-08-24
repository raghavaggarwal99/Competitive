class Solution {
public:
    string reorganizeString(string S) {
        
        
        int n = S.length();
        
        string ans="";
        
        
        unordered_map <char, int> counts;
        
        
        for(int i=0; i<n; i++){
            counts[S[i]]++;
        }
        
        
        priority_queue <pair<int, char>, vector <pair<int, char>>> pq;
        
        for(auto it: counts){
            pq.push({it.second, it.first});
        }
        
        
        for(int i=0; i<n; i=i+2){
            
            pair<int, char> maxm = pq.top();
            pq.pop();
            
            if(pq.empty()){
                ans=ans+ maxm.second;
                break;
            }
            
            
            pair<int, char> maxm2 = pq.top();
            pq.pop();
            
            
            ans=ans+ maxm.second;
            
            if(maxm2.first>0){
                ans=ans+ maxm2.second;  
            }
            
            pq.push({maxm.first-1,maxm.second});
            pq.push({maxm2.first-1, maxm2.second});
        }
        
        
        string copy=ans;
        
        sort(copy.begin(), copy.end());
        sort(S.begin(), S.end());
        
        if(copy!=S){
            return "";
        }
        
        
        
        
        return ans;
        
        
        
        
    }
};
