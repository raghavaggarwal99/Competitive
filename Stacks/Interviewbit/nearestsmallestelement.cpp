vector<int> Solution::prevSmaller(vector<int> &A) {
    
    
    int n=A.size();
    
    vector<int> ans;
    stack<int> s;
    
    for(int i=0; i<n; i++){
        while(!s.empty() && s.top()>=A[i]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(-1);
            s.push(A[i]);
        }
        else{
            ans.push_back(s.top());
            s.push(A[i]);
        }
        
    }
    
    return ans;
    
    
    
    
}

