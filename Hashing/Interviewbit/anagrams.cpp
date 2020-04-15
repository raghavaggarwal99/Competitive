vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
    
    unordered_map<string,int> x;
    int count=1;
    
    for(int i=0; i<A.size(); i++){
        string copy=A[i];
        
        sort(copy.begin(), copy.end());
        
        if(x[copy]==0){
            x[copy]=count;
            count++;
            
        }
        
        
    }
    
    x.clear();
    vector<vector<int>> ans(count-1);
    count=1;
    for(int i=0; i<A.size(); i++){
        string copy=A[i];
        
        sort(copy.begin(), copy.end());
        
        if(x[copy]==0){
            x[copy]=count;
            ans[count-1].push_back(i+1);
            count++;
            
        }
        else{
            int v=x[copy];
            ans[v-1].push_back(i+1);
        }
        
        
    }
    return ans;
    
    
    
    
}

