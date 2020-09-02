int Solution::searchInsert(vector<int> &A, int B) {
 
 
  int l=0;
    int h=A.size();
    
    while(l<h)
    {
        int mid=l+(h-l)/2;
        
        if(A[mid]>=B)
            h=mid;
        else
            l=mid+1;
    }
    
    return h;
 
 
 
 
 
 
 
 
 
 
}
