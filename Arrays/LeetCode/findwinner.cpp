class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        
       int n = arr.size();
        
        int maxE = arr[0];
        
        int peak_element = arr[0];
        
        int count = 0;
        
        for(int i=1;i<n;i++){
            if(arr[i]<peak_element){
                count++;
            }
            else{
                peak_element = arr[i];
                count = 1;
            }
            if(count==k){
                return peak_element;
            }
            maxE = max(maxE, arr[i]);
        }
        
        return maxE;
        
        
        
        
        
        
    }
};
