class Solution {
public:
    int kthSmallest(vector<vector<int>>& A, int k) {
        
        priority_queue<int, vector<int>, greater<int>> v;
        
        for(int i=0; i<A.size(); i++){
            
            for(int j=0; j<A[0].size(); j++){
                
                v.push(A[i][j]);
                
            }
        }
        
        int i=0;
        
        
        while(i<k-1){
            
            v.pop();
            i++;
            
            
        }
        
        return v.top();
        
        
        
        
        
    }
};
