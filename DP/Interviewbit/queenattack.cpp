vector<int> X = {1, 1, 0, -1, -1, -1, 0, 1};
vector<int> Y = {0, -1, -1, -1, 0, 1, 1, 1};

void func (vector<string> &A, vector<vector<int> >&out, int row, int col){
    
    for(int i = 0; i < 8; i++){
        
    int x = row + X[i], y = col + Y[i];
    while(x >= 0 && x < out.size() && y >= 0 && y < out[0].size()){
        
            if (A[x][y] == '1'){
            out[x][y]++;
            break;
            }
            
            out[x][y]++;
            x += X[i];
            y += Y[i];
        }
    }
}


vector<vector<int> > Solution::queenAttack(vector<string> &A) {
    
    vector<vector<int> > out (A.size(), vector (A[0].size(), 0));
    
    
    for(int i = 0; i < A.size(); i++){
        
        for(int j = 0; j < A[0].size(); j++){
            if (A[i][j] == '1'){
            func(A, out, i, j);
            }
        }
    }    
    
    
    
    return out;
    
    
    
}

