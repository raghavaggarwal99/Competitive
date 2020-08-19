class Solution {
public:
    int firstMissingPositive(vector<int>& A) {
        
        unordered_map<int, int> x;
        
        int min1= INT_MAX;
        int max1=INT_MIN;
        
        for(int i=0; i<A.size(); i++){
            
            min1=min(A[i], min1);
            max1=max(A[i], max1);
            
            x[A[i]]++;
            
        }
        
        cout<<min1<<endl;
        
        cout<<max1<<endl;
        
        
        if(min1>=2){
            return 1;
        }
        
         
        if(max1<=0){
            return 1;
        }
        
        
        for(int i=1; i<=max1; i++){
         
            
            if(i<max1 && x[i]==0){
                return i;
            }
            
            
        }
        
   
        
        return max1+1;
        
        
        
        
        
        
    }
};
