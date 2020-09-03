int Solution::candy(vector<int> &A) {
    
    
   vector<int> left(A.size(), 0), right(A.size(), 0);
   
    for(int i=0; i<A.size(); i++)
    {
        if(i==0||A[i]<=A[i-1]) left[i]=1;
        else left[i]=1+left[i-1];
    }
    
    for(int i=A.size()-1; i>=0; i--)
    {
        if(i==A.size()-1||A[i]<=A[i+1]) right[i]=1;
        else right[i]=1+right[i+1];
    }
    
    int sum=0;
    
    for(int i=0; i<A.size(); i++){
        sum+=max(left[i], right[i]);
    }
    return sum;
        
        
    
    
    
    
    
}

