class Solution {
public:
    int minSetSize(vector<int>& A) {
        
        
        unordered_map<int,int> x;
        
        for(int i=0; i<A.size(); i++){
            x[A[i]]++;
        }
        
        unordered_map<int,int> :: iterator it;
        
        int n=A.size();
        
        int ans=0;
        
        vector<pair<int,int>> v;
        
        
        for(it=x.begin(); it!=x.end(); it++){
            
            v.push_back(make_pair(it->second, it->first));
            
            // cout<<it->first<<" "<<it->second<<endl;
            
            
        }
        
        sort(v.begin(), v.end());
        
        reverse(v.begin(), v.end());
        
        int sum=0;
        
        for(int i=0; i<v.size(); i++){
            
            int d=v[i].first;
            sum+=d;
        
            if(sum>=n/2){
                ans++;
                break;
            }
            else{
                ans++;
            }
        

        }
        
        
        
        return ans;
        
        
        
        
        
        
        
        
    }
};
