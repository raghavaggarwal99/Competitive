void fill(vector<vector<char> > &A, int x, int y, char prev, char next){
    
    
    if (x < 0 || x >= A.size() || y < 0 || y >= A[0].size()) 
        return; 
        
    if (A[x][y] != prev) 
        return; 
        
        
        
    A[x][y]=next;
    
    
    fill(A,x+1,y,prev, next);
    fill(A,x-1,y,prev, next);
    fill(A,x,y+1,prev, next);
    fill(A,x,y-1,prev, next);
    
}



void solve1(vector<vector<char> > &A){
    
    
    int n=A.size();
    int m=A[0].size();
    
    for(int i=0; i<n; i++){
        if(A[i][0]=='-'){
            fill(A, i,0, '-', 'O');
        }
    }
    
    
     for(int i=0; i<n; i++){
        if(A[i][m-1]=='-'){
            fill(A, i,m-1, '-', 'O');
        }
    }
    
     for(int i=0; i<m; i++){
        if(A[0][i]=='-'){
            fill(A, 0,i, '-', 'O');
        }
    }
    
     for(int i=0; i<m; i++){
        if(A[n-1][i]=='-'){
            fill(A, n-1,i, '-', 'O');
        }
    }
    
    
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i][j]=='-'){
                A[i][j]='X';
            }
        }
    }
    
}


void Solution::solve(vector<vector<char> > &A) {
 
    int n=A.size();
    int m=A[0].size();
 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i][j]=='O'){
               A[i][j]='-'; 
            }
        }
    }
    
    // cout<<"sdv"<<endl;
    
    solve1(A);
    
    return;
    
    
 
}
