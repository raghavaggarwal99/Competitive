class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) {
        
        
        vector<int> ans;
        
        unordered_map<int,int> x;
        
        for(int i=0; i<a.size(); i++){
            if(x[a[i]]==0){
                ans.push_back(a[i]);
                x[a[i]]++;
            }
            else{
                x[a[i]]++;
            }
        }
        
        unordered_map<int,int> y;
            
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<endl;
            int v=x[ans[i]];
            if(y[v]==0){
                y[v]=1;
            }
            else{
                return 0;
            }
            
        }
        
        return 1;
        
        
        
    }
};
