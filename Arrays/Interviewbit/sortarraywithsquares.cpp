vector<int> Solution::solve(vector<int> &A) {
    
    vector<int> temp;
    
    int n=A.size();
 
    int count=-1;
    
    for(int i=0; i<n; i++){
        if(A[i]<0){
            count=i;
        }
    }
    
    // if(count==-1){
    //     for(int i=0; i<n; i++){
    //         ans.push_back(A[i]*A[i]);
    //     }
    //     return ans;
    // }
    
    int start=count+1;

    
    while(count>=0 && start<n){
        
        
        if(A[start]*A[start]<A[count]*A[count]){
            temp.push_back( A[start]*A[start]) ;
            start++;
        }
        else{
            temp.push_back(A[count]*A[count]);
            count--;
        }
       

    }
    
    
    while(start<n){
        
        temp.push_back(A[start]*A[start]);
        start++;


    }
    
    
     while(count>=0){
        
        temp.push_back(A[count]*A[count]);
        count--;

    }
    
    
    //  for(int i=0; i<n; i++){
    //   cout<<temp[i]<<" ";
    // }
    
    
    
    return temp;
    
    
    
    
    
}

