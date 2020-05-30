class Solution {
public:
    int thirdMax(vector<int>& arr) {
        
      long long int first = arr[0], second = INT_MIN, third = INT_MIN; 
  
      int check=0;
        
        if(arr[0]==INT_MIN){
                check=1;
        }
        
        
        for (int i = 1; i < arr.size() ; i ++) 
        { 

            if(arr[i]==INT_MIN){
                check=1;
            }
            
            if (arr[i] > first) 
            { 
                third  = second; 
                second = first; 
                first  = arr[i]; 
            } 
            else if (arr[i] > second && arr[i]<first) 
            { 
                third = second; 
                second = arr[i]; 
            } 

            else if (arr[i] > third && arr[i]<second) 
                third = arr[i]; 
        } 

        
            if (arr.size() < 3  || second==third || first==second || second==INT_MIN) 
            { 
                return first; 
            } 
        
            if(third==INT_MIN && check==1){
                return third;
            }
        
            if(third==INT_MIN && check==0){
                return first;
            }
        
            return third;
        
    }
};
