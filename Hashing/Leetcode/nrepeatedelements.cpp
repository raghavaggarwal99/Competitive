class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        
        int n=A.size();
        
        
        sort(A.begin(), A.end());
        
        for(int i=1; i<A.size(); i++){
            if(A[i]==A[i-1]){
                return A[i];
            }
        }
        
        return 1;
        
    }
};
