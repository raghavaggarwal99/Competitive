class Solution {
public:
    
      void solve(vector<int>& A, int B, vector<vector<int>> &ans, vector<int> &temp, int i, int k){
        
        if(B<0){
            return ;
        }
       
       if(B==0){
           cout<<A[i]<<endl;
          
           if(temp.size()==k){
                ans.push_back(temp);
           }
           
           return;
       }
        
         while (i < A.size() && B - A[i] >= 0) 
        { 


            temp.push_back(A[i]); // add them to list 


            solve(A, B - A[i], ans, temp, i+1, k); 
            i++; 


            temp.pop_back(); 
        } 

        
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        
        vector<int> A;
        
        for(int i=1; i<=9; i++){
            A.push_back(i);
        }
        
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(A, n, ans, temp,0, k);
        
        return ans;
        
        
    }
};



