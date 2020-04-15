int Solution::nTriang(vector<int> &A) {
    
    
    int num = pow(10, 9) + 7;
    int count=0;
    
    sort(A.begin(), A.end());
    
    for(int k=A.size()-1; k>=0; k--){
        
        int i=0;
        int j=k-1;
        
        
        while(i<j){
            
            if(A[i]+A[j]>A[k]){
                count=(count+(j-i)%num)%num;
                j--;
            }   
            else{
                i++;
            }
        }

        
    }
    
    return count;
    
}

