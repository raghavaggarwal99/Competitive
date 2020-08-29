class Solution {
public:
    vector<int> getStrongest(vector<int>& A, int k) {
        
        
        sort(A.begin(), A.end());
        
        int n=A.size();
        
        if(n==1){
            return A;
        }
        
        
        int start=0;
        int end= A.size()-1;
        
        int mid= (A.size()-1)/2;
        
        vector<int> temp;
        
        
        while(1){

            if(start==mid && end==mid){
                temp.push_back(A[mid]);
                break;
            }
            
            if(A[end]-A[mid]>=A[mid]-A[start] && end>mid){
                temp.push_back(A[end]);
                end--;
            }
            
            else if(start<mid){
                temp.push_back(A[start]);
                start++;
            }
            
        }

        
        vector<int> ans;
        
        for(int i=0; i<n-1; i++){
            cout<< temp[i]<<endl;
        }
        
        for(int i=0; i<k; i++){
            ans.push_back(temp[i]);
        }
        
        
        return ans;
        
        
    }
};
