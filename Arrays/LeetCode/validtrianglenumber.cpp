class Solution {
public:
    int triangleNumber(vector<int>& A) {
        
        sort(A.begin(), A.end());
        
        int n=A.size();
        
        int count=0;
        
        
        for(int k=A.size()-1; k>=0; k--){

            int i=0;
            int j=k-1;


            while(i<j){

                if(A[i]+A[j]>A[k]){
                    count=(count+(j-i));
                    j--;
                }   
                else{
                    i++;
                }
            }


        }
    
    return count;
            
            
            
            
            
            
            
            
            
    
        
        
    }
};
