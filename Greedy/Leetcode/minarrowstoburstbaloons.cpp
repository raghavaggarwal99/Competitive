class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& A) {
        
        int n=A.size();
        
        if(n==0){
            return 0;
        }
        
        
        if(n==1){
            return 1;
        }
        
        
        sort(A.begin(), A.end());
        
        int ans=1;
        
        
        for(int i=0; i<A.size(); i++){
            
            cout<<A[i][0]<<" "<<A[i][1]<<endl;
            
        }
        
        
        int start=A[0][0];
        int v= A[0][1];
        
        
        for(int i=1; i<A.size(); i++){
            
            if(A[i][0] <=v){
                start=max(A[i][0], start);
                v=min(A[i][1], v);
            }
            else{
                ans++;
                start=A[i][0];
                v=A[i][1];
            }
            
        }
        
        return ans;
    
        
        
        
    }
};
