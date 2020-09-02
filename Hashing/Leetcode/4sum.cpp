class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& A, int target) {
        
   
        vector<vector<int>> res;
        
         if(A.size()<4){
            return res;
        }
        
          sort(A.begin(), A.end());
        
        int size=A.size();
        
        for(int i=0; i<A.size()-3; i++){
            
            if(i>0 && A[i]==A[i-1]){
                continue;
            }
            
            
            for(int j=i+1; j<A.size()-2; j++){
                
                 if(j>i+1 && A[j]==A[j-1]){
                     continue;
                 }
            
                
                int ptr1=j+1;
                int ptr2=size-1;
                
                
                while(ptr1<ptr2){
                    
                    
                    int sum=A[i]+A[j]+A[ptr1]+A[ptr2];
                    
                    if(sum==target){
                        
                        vector<int> temp;
                        temp.push_back(A[i]);
                        temp.push_back(A[j]);
                        temp.push_back(A[ptr1]);
                        temp.push_back(A[ptr2]);
                        res.push_back(temp);
                        
                        ++ptr1;
                        while (ptr1<ptr2 && A[ptr1] == A[ptr1-1])
                            ++ptr1;
                        
                    }
                     else if (sum > target)
                    --ptr2;
                    else if (sum < target)
                        ++ptr1;
                    

                    
                }

            }
            
        }
        
        
        return res;
        
        
    }
};
