class Solution {
public:
    int minOperations(int n) {
        
//         int *a=new int[n];
        
//         for(int i=0; i<n; i++){
//             a[i]=2*(i)+1;
//         }
        
        
          
//         for(int i=0; i<n; i++){
//             cout<<a[i]<<" ";
//         }
        
//         cout<<endl;
        
        
        if(n%2!=0){

            int x=n/2;
            
            return x*n-x*x;
            
        }
        else{
            
            int x=n/2;
           
            cout<<x<<endl;
            
            return x*n-x*x;
            
        }
        
        
        return 1;
        
        
        
    }
};
