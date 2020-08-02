class Solution {
public:
    
    
    int getVal(vector <int>& v){
      int maxVal = INT_MIN;
      int minVal = INT_MAX;
      for(int i = 0; i < v.size(); i++){
         minVal = min(v[i], minVal);
         maxVal = max(v[i], maxVal);
      }
      return maxVal - minVal;
   }
    
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        
         vector <int> ret[4];
      int n = arr1.size();
        
      for(int i = 0; i < n; i++){
         ret[0].push_back(arr1[i] - arr2[i] + i);
         ret[1].push_back(arr1[i] + arr2[i] + i);
         ret[2].push_back(arr1[i] - arr2[i] - i);
         ret[3].push_back(arr1[i] + arr2[i] - i);
      }
      int ans = INT_MIN;
      for(int i = 0; i < 4; i++){
         ans = max(ans, getVal(ret[i]));
      }
      return ans;
        
        
        
        
    }
};
