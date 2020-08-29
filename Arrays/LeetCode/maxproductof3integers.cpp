class Solution {
public:
    int maximumProduct(vector<int>& A) {
        
        int n=A.size();
        
        sort(A.begin(), A.end());
        
        if(n<3){
            return 0;
        }
        
        
        long long int maxx1= A[n-1]*A[n-2]*A[n-3];
        
        long long int maxx2= A[n-1]*A[0]*A[1];
        
        
        
        
        return max(maxx1, maxx2);
        
        
        
        
    }
};
