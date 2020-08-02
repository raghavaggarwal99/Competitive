class Solution {
public:
    
  
    vector<int> topKFrequent(vector<int>& a, int k) {
        int n=a.size();
        
        unordered_map<int,int> x;
        
         unordered_map<int,int> y;
        
        for(int i=0; i<a.size(); i++){
            
            // if(a[i]==647){
            //     cout<<"ra"<<endl;            
            // }
            
            x[a[i]]++;
        }
        
        
         vector<pair<int,int>> v;
        
        
         for(int i=0; i<a.size(); i++){
           int w=a[i];
             
             if(y[a[i]]==0){
                  v.push_back(make_pair(x[w],w));
                 y[a[i]]=1;
             }
             
        }
        
        sort(v.begin(), v.end());
         
        reverse(v.begin(), v.end());
        
        
        vector<int> ans;
        
        for(int i=0; i<k; i++){
            // cout<<v[i].first<<" "<<v[i].second<<endl;
            
            if(v[i].second==647){
                cout<<v[i].first<<endl;
            }
            
            // int q= v[i].first;
            
            
            ans.push_back(v[i].second);
            
        }
        
        return ans;
            
        
        

    }
};



