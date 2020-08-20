class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> ans;
        
        int start=1;
        int end=n;
        
        if(k==1){
             for(int i=start; i<=end; i++){
                ans.push_back(i);
            }
            
            return ans;
            
        }
        
        
        if(k>1){
            
            while(1){
                
                ans.push_back(start);
                start++;
                
                if(ans.size()==k){
                    break;
                }
                
                ans.push_back(end);
                end--;
                
                 if(ans.size()==k){
                    break;
                }
                
            }
            
            
        }
        
        if(start>end){
            return ans;
        }
        
        cout<<start<<" "<<end<<endl;
        
        
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        
        cout<<endl;
        
        if(ans[ans.size()-1]==start-1){
            for(int i=start; i<=end; i++){
                ans.push_back(i);
                
                if(ans.size()==n){
                    break;
                }
            }
        }
        else{
            for(int i=end; i>=start; i--){
                ans.push_back(i);
                if(ans.size()==n){
                    break;
                }
            }
        }
        
         for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
        return ans;
        
        
        
    }
};
