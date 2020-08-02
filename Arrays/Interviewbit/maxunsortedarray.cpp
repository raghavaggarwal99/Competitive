vector<int> Solution::subUnsort(vector<int> &A) {
    
    vector<int> copy=A;
    
    sort(copy.begin(), copy.end());
    vector<int> ans;
    int index1=-1;
    int index2=-1;
    
    for(int i=0; i<A.size(); i++){
       
       if(A[i]!=copy[i] && index1==-1){
           index1=i;
       }
       else if(A[i]!=copy[i] && index1!=-1){
           index2=i;
       }
       
    }
     ans.push_back(index1);
    if(index1==-1){
        return ans;
    }

     ans.push_back(index2); 
    
    
    return ans;
    
    
    
}

