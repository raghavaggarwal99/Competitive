int dx[8]={0, 1, 1, 1, 0, -1, -1, -1};
int dy[8]={1, 1, 0, -1, -1, -1, 0, 1};

bool isValid(int x, int y, int N, int M){
    
    if(x<0 || x>N || y<0 || y>M) return false;
    return true;
}

bool inCircle(int A, int B, int C, int D, vector<int> &E, vector<int> &F){
    
    for(int k=0; k<C; k++){
        if(pow((A-E[k]), 2)+pow((B-F[k]),2)<=pow(D,2)) return true;
    }
    
    return false;
}

void dfs(int x, int y, vector<vector<bool>> &vis, int A, int B, int C, int D, vector<int> &E, vector<int> &F){
    
    vis[x][y]=true;
    
    for(int i=0; i<8; i++){
        
        int a=x+dx[i];
        
        int b=y+dy[i];
        
        if(isValid(a, b, A, B) && !vis[a][b] && !inCircle(a, b, C, D, E, F)){
            dfs(a, b, vis, A, B, C, D, E, F);
        }
    }
}

string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F){
    
    vector<vector<bool>> vis(A+1, vector<bool> (B+1, false));

    if(inCircle(0, 0, C, D, E, F)) return "NO";
    
    dfs(0, 0, vis, A, B, C, D, E, F);
    
    if(vis[A][B]){
        return "YES";
    }
   
    return "NO";
   
}
