class Solution {
public:
    int majorityElement(vector<int>& a) {
        
        int n=a.size();
        
        unordered_map<int,int> x;
        
        for(int i=0; i<a.size(); i++){
            x[a[i]]++;
            
            
            if(x[a[i]]>n/2){
                return a[i];
            }
        }
        
        return -1;
        
        
    }
};
