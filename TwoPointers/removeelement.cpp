int Solution::removeElement(vector<int> &A, int B) {
 
     int i = 0;
    int length = A.size();
    
    while(i < A.size()){
        if(A[i] == B){
            break;
        }
        i++;
    }
    
    if(i == length){
        return length;
    }
    
    int j = i+1;
    
    while(j < length){
        if(A[j] != B){
            A[i] = A[j];
            i++;
        }
        j++;
    }
    
    while(i < length){
        A.pop_back();
        i++;
    }
    
    return A.size();
 
 
}
