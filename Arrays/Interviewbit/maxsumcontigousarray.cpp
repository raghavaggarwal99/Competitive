int Solution::maxSubArray(const vector<int> &A) {
    
    int ans=INT_MIN;
    int count=0;
    
    
    for(int i=0; i<A.size(); i++){
        count+=A[i];
        
        if(count>ans){
            ans=count;
        }
        if(count<0){
            count=0;
        }
    }
    
    return ans;
    
    
}

