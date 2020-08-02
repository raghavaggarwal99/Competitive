class Solution {
public:
    
    bool solve(pair<char,int> &a, pair<char,int> &b ){
        
        return a.second>b.second;
        
    }
    
    string frequencySort(string s) {
        
        unordered_map<char,int> x;
        
         unordered_map<char,int> y;
        
        for(int i=0; i<s.length(); i++){
            x[s[i]]++;
        }
        
        
        vector<pair<int,char>> v;
        
        
         for(int i=0; i<s.length(); i++){
           char w=s[i];
             
             if(y[s[i]]==0){
                  v.push_back(make_pair(x[w],w));
                 y[s[i]]=1;
             }
             
        }
        
//         for(char i='a'; i<='z'; i++){
//             // cout<<i<<" "<<x[i]<<endl;
//             v.push_back(make_pair(x[i],i));
//         }
        
//          for(char i='A'; i<='Z'; i++){
//             // cout<<i<<" "<<x[i]<<endl;
//             v.push_back(make_pair(x[i],i));
//         }
        
        sort(v.begin(), v.end());
        
        reverse(v.begin(), v.end());
        
        
        string ans="";
        
        for(int i=0; i<v.size(); i++){
            int q= v[i].first;
            
            
            for(int j=0; j<q; j++){
                ans+=v[i].second;
            }
            
        }
        
        return ans;
            
            
        
        
    }
};
