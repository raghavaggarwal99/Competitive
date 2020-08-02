int Solution::maxSpecialProduct(vector<int> &A) {
    
    stack<int> left;
    vector<int> leftvalue;
    int n=A.size();
    
    for(int i=0; i<A.size(); i++){
        
        while(!left.empty() && A[left.top()]<=A[i]){
            left.pop();
        }
        if(left.empty()){
            leftvalue.push_back(0);
        }
        else{
            leftvalue.push_back(left.top());
            
        }
            left.push(i);
        
    }
   
    // for(int i=0; i<leftvalue.size(); i++){
    //     cout<<leftvalue[i]<<" ";
    // }
    //  cout<<endl;
    vector<int> rightvalue(n,0);
    
   stack<int> right;
    right.push(n-1);
    
    rightvalue[n-1]=0;
    
    for(int i=n-2;i>=0;i--){
        
        while(!right.empty()){
            if(A[right.top()]>A[i]){ 
                break;
                
            }
            right.pop();
        }
        if(right.empty()){
            rightvalue[i]=0;
        }
        else{
            rightvalue[i]=right.top();
        }
        right.push(i);
    }
    //   for(int i=0; i<rightvalue.size(); i++){
    //     cout<<rightvalue[i]<<" ";
    // }
    
      long long mx = -1;
    for(int i=0;i<n;i++){
        mx=max(mx,leftvalue[i]*1LL*rightvalue[i]);
    }
    return mx%1000000007;
    
  
    
    
}

