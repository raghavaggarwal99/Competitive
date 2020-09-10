class Solution {
public:
    
     unordered_map<int,unordered_map<int,unordered_map<int,long long int>>>t;

    
    long long int findPaths(int m, int n, int N, int i, int j) {
        
        
        if(t.count(i) and t[i].count(j) and t[i][j].count(N)) return t[i][j][N];
        
        if(i<0 or i>=m or j<0 or j>=n){
            return 1;
        }
        
        
        if(N==0){
            return 0;
        }
        
        
        long long int total=findPaths(m,n,N-1,i+1,j) + findPaths(m,n,N-1,i,j+1)+ findPaths(m,n,N-1,i-1,j) + findPaths(m,n,N-1,i,j-1);
        
        
        total=total%(1000000007);
        
        t[i][j][N]=total;
        
        return total;
        
    }
        
    
};
