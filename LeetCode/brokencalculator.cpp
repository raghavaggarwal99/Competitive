class Solution {
public:
    int brokenCalc(int X, int Y) {
        
        
        int count=0;
        
        while(Y>X){
            
            if(Y%2==0){
                Y=Y/2;
                count++;
            }
            else{
                Y=Y+1;
                count++;
            }
            
            
        }
        
        count+=X-Y;
        
        return count;
        
        
        
        
        
    }
};
