class Solution {
public:
    int search(vector<int>& A, int B) {
        
        int ans=-1;
        
        for(int i=0; i<A.size(); i++){
            if(A[i]==B){
                ans=i;
            }
        }
        
        
        return ans;
        
        
        
        
        
    }
};
