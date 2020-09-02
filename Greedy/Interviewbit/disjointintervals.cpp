bool cmp(vector<int> A, vector<int> B){
return A[1]<B[1];
}


int Solution::solve(vector<vector<int>> &A) {
    
    int count = 1;
    
    sort(A.begin(), A.end(), cmp);
    int endtime = A[0][1];
    
    for(int i = 1 ; i < A.size() ; i++){
        if(A[i][0] > endtime){
            count++;
            endtime = A[i][1];
        }
    }
    
    
    return count;
}
