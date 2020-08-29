class Solution {
public:
    vector<int> plusOne(vector<int>& A) {
        
        
        int n=A.size();
        int carry=1;
        
        for(int i=n-1; i>=0; i--){
            
            if(A[i]<=8){
                A[i]=A[i]+carry;
                carry=0;
                break;
            }
            else{
                A[i]=0;
                carry=1;
                
            }

        }
        
        if(carry==1){
            
            A.insert(A.begin(),1); 
        }
        
        return A;
        
        
        
    }
};
