class Solution {
public:
    vector<string> summaryRanges(vector<int>& A) {
        
        vector<string> ans;
        
        int n=A.size();
        
        if(n==0){
            return ans;
        }
        
        if(n==1){
            ans.push_back(to_string(A[0]));
            return ans;
        }
        
        long long int start=A[0];
        
        long long int track=INT_MIN;
        
        for(int i=1; i<n; i++){
            
            if((long long int)A[i]-(long long int)A[i-1]==1){
                track=A[i];
            }
            else{
                  
                if(track<=start){
                        ans.push_back(to_string(start));
                   }
                else{
                    string v= to_string(start)+ "->" + to_string(track);
                    ans.push_back(v);
                }
                start=A[i];
                
            }
            
        }
        
        
        if(start==A[n-1]){
            ans.push_back(to_string(start));
        }
        
        
        if(track==A[n-1]){
            
            string v= to_string(start)+ "->" + to_string(track);
            ans.push_back(v);
        }
        
        
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<endl;
        }
        
        return ans;
        
        
        
    }
};
