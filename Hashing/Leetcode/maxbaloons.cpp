class Solution {
public:
    int maxNumberOfBalloons(string s) {
        
        
        unordered_map<char,int> x;
        
        
        for(int i=0; i<s.size(); i++){
            x[s[i]]++;
        }
        
        
        string v="baloon";
        int ans=INT_MAX;
        
        int y=x['o'];
        int z=x['l'];
        ans=min(ans, y/2);
        ans=min(ans, z/2);
        
        for(int i=0; i<v.size(); i++){
            
           if(v[i]!='o' && v[i]!='l'){
               if(x[v[i]]<ans){
                    ans=x[v[i]];
                }
            }
        }
        
        
        return ans;
    
        
        
        
        
    }
};


