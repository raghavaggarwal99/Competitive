class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        
     sort(a.begin(), a.end());
        
        
    int targetIndex = a.size() - k;
        
        
    return a[targetIndex];
        
        
    }
};
