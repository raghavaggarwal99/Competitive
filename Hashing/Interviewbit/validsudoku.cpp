bool notInBox(const vector<string> &A, int startRow, int startCol) 
{ 
    set<char> st; 
  
    for (int row = 0; row < 3; row++) { 
        for (int col = 0; col < 3; col++) { 
            
            char curr = A[row + startRow][col + startCol]; 
  
            // If already encountered before, return false 
            if (st.find(curr) != st.end()) 
                return false; 
  
            // If it is not an empty cell, 
            // insert value at current cell in set 
            if (curr != '.') 
                st.insert(curr); 
        } 
    } 
    return true; 
} 



int Solution::isValidSudoku(const vector<string> &A) {
    
    unordered_map<char,int> x;
    
    
    for(int i=0; i<9; i++){
        
        for(int j=0; j<9; j++){
            if(A[i][j]=='.'){
                continue;
            }
            else{
                x[A[i][j]]++;
                if(x[A[i][j]]>1){
                    return 0;
                }
            }
        }
        x.clear();
    }
    
     x.clear();
     
    //  cout<<"dgf"<<endl;
     
     
     for(int i=0; i<9; i++){
        
        for(int j=0; j<9; j++){
            if(A[j][i]=='.'){
                continue;
            }
            else{
                x[A[j][i]]++;
                if(x[A[j][i]]>1){
                    return 0;
                }
            }
        }
        x.clear();
    }
    
    x.clear();
    
    //   cout<<"dgf"<<endl;
    
    
    for (int i = 0; i < 9; i++) { 
        for (int j = 0; j < 9; j++) { 
  
 
            if (!notInBox(A, i - i % 3, j - j % 3)) 
                return false; 
        } 
    } 

    return 1;
    
    
    
    
    
    
    
    
    
}

