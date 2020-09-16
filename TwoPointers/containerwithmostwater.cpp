int area(int a, int b, vector<int> &A){
    
    return (b-a)*(min(A[b], A[a]));
}

int Solution::maxArea(vector<int> &A) {
    
    
    int start=0;
    
    int end=A.size()-1;
    
    int ans=0;
    
   
    
    while(start<end){
        
        ans=max(ans, area(start, end, A));
        
        
        if(start+1<end && area(start+1, end, A) > area(start, end, A)){
            start++;
        }
        else if(start<end-1 && area(start, end-1, A) > area(start, end, A)){
            end--;
        }
        else{
            if(A[end]>A[start]){
                start++;
            }
            else if(A[end]<A[start]){
                end--;
            }
            else{
                start++;
                end--;
            }
        }
        
        
    }
    
    
    
    return ans;
    

}

