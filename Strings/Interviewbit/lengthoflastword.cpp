int Solution::lengthOfLastWord(const string A) {
    
    
    int count=0;
    int n=A.length()-1;
    int check=0;
    
    for(int i=n; i>=0; i--){
        
        if(A[i]==32 && check==0){
            continue;
        }
        if(A[i]==32 && check==1){
            break;
        }
        else{
            count++;
            check=1;
        }
    }
    
    
    
    return count;
    
    
}

