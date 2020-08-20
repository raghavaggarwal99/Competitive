class Solution {
public:
    
    
   void solve(vector<int>& A, int B, vector<vector<int>> &ans, vector<int> &temp, int i){
        
        if(B<0){
            return ;
        }
       
       if(B==0){
           cout<<A[i]<<endl;
           ans.push_back(temp);
           return;
       }
        
         while (i < A.size() && B - A[i] >= 0) 
        { 


            temp.push_back(A[i]); // add them to list 


            solve(A, B - A[i], ans, temp, i); 
            i++; 


            temp.pop_back(); 
        } 

        
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& A, int B) {
        
        sort(A.begin(), A.end());
        
        vector<vector<int>> ans;
        vector<int> temp;
        
        solve(A, B, ans, temp,0);
        
        return ans;
        
        
        
        
    }
};
