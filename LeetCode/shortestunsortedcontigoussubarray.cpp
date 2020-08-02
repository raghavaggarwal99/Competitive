class Solution {
public:
    int findUnsortedSubarray(vector<int>& a) {
        vector<int> copy=a;
    
        sort(copy.begin(), copy.end());
        
        int start = a.size(), end = 0;
        
        for(int i=0; i<a.size(); i++){
            
           if (a[i] != copy[i]) {
                start = min(start, i);
                end = max(end, i);
            }
        }
        
        if(end-start>=0){
            return end-start+1;
        }
        
        return 0;
        
    }
};
