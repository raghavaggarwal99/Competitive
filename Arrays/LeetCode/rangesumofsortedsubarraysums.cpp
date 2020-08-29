class Solution {
public:
    int rangeSum(vector<int>& A, int n, int left, int right) {
        
        
        long long int mod =pow(10,9)+7;
        
        vector<long long int> temp;
  
        for(int i=0; i<n; i++){
            
            long long int sum=0;
            for(int j=i; j<n; j++){
                sum+=A[j];
                temp.push_back(sum);
                
            }
            
            
        }

        sort(temp.begin(), temp.end());
        
        long long int y=0;
        
        for(int i=left-1; i<=right-1; i++){
            y+=temp[i]%mod;
        }
        
        return y%mod;
        
        
        
        
    }
};
