vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    
    int n=A.size();
    
    if(A.size()==1){
        return A;
    }
    
    
    vector<vector<int>> v(2*n-1);
    
    int left=0;
    int right=0;
    
    
    v[0].push_back(A[0][0]);
    
    int count=1;
    int rows=A.size();
    int cols=A[0].size();
    right+=1;
    left+=1;
    
    while(1){
        
        int top=0;
        
        for(int j=right; j>=0; j--){
            v[count].push_back(A[top][j]);
            top++;
        }
        
        count++;
        right++;
        if(right>=cols){
            break;
        }
    }
    
    int top=1;
    
    while(1){
        
        right=cols-1;
        
        for(int j=top; j<rows; j++){
            v[count].push_back(A[j][right]);
            right--;
        }
        
        count++;
        top+=1;
        if(top>=rows){
            break;
        }
        
        
    }
    return v;
    
    
    
    
    
    
    
}

