class Solution {
public:
    bool checkPossibility(vector<int>& a) {
        
        int count=-1;
        int n=a.size();
        
        for(int i=0; i<a.size()-1; i++){
            
            if(a[i]>a[i+1]){
                if(count!=-1){
                    return 0;
                }
                count=i;
            }
            
        }
    
        
        return (count ==-1 or count == 0 or count == n-2 or
                a[count-1] <= a[count+1] or a[count] <= a[count+2]);
        
        
    }
};
