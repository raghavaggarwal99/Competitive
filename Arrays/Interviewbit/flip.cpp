vector<int> Solution::flip(string A) {
    
    int maxx=0;
    int diff=0;
    int left=0;
    vector<int> ans;
    
    for(int i=0; i<A.length(); i++){
        
        if(diff<0){
            diff=0;
            left=i;
        }
        
        if(A[i]=='0'){
            diff++;
            if(diff>maxx){
                maxx=diff;
                ans.clear();
                ans.push_back(left+1);
                ans.push_back(i+1);
            }
        }
        else{
            diff--;
        }
        
    }
    
    
    return ans;
    
    
}

