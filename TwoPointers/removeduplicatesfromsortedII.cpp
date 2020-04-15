int Solution::removeDuplicates(vector<int> &A) {
    
    int check=0;
    int i=0;
    int count=0;
    int v=A[0];
    
    while(i<A.size()){
        
        if(A[i]==v && count<2){
            count++;
          
            v=A[i];
        }    
        else if(A[i]==v && count>=2){
            A[i]=-1;
            count++;
        }
        else{
            v=A[i];
            count=1;
     
        }
        i++;   
        
    }
    
    // for(int i=0; i<A.size(); i++){
    //     cout<<A[i]<<" ";
    // }
    
    sort(A.begin(), A.end(), greater<int>());
    // for(int i=0; i<A.size(); i++){
    //     cout<<A[i]<<" ";
    // }
    while(1){
        if(A[A.size()-1]!=-1){
            break;
        }
        else{
         A.pop_back();
        }
    }
    
    sort(A.begin(),A.end());
    
    return A.size();
    
    
    
    
    
    
    
    
    
    
}
