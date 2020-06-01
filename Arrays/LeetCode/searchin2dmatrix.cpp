class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int n=matrix.size();
        
        
        if(n==0){
            return 0;
        }
        
        cout<<n<<endl;
        
        int m=matrix[0].size();
        
         if(m==0){
            return 0;
        }
        
        
        int check=-1;
        cout<<m<<endl;
        
        
        for(int i=0; i<n; i++){
            
           if(matrix[i][m-1]>=target){
               check=i;
               break;
           }
        }
        
        if(check==-1){
            return 0;
        }
        
        cout<<check<<endl;
        
        for(int i=0; i<m; i++){
            if(matrix[check][i]==target){
                return 1;
            }
        }
        
        return 0;
        
        
        
    }
};
