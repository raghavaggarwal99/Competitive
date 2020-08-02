int Solution::maximumGap(const vector<int> &A) {
    
    priority_queue<int, vector<int>, greater<int>> pq;
 
    for(int i=0; i<A.size(); i++){
        pq.push(A[i]);
    }
    
    int ans=INT_MIN;
    
    while(!pq.empty()){
        int a= pq.top();
        pq.pop();
        
        if(pq.top()-a>ans){
            ans=pq.top()-a;
        }
    }
    
    return ans;
    
    
    
    
    
}

