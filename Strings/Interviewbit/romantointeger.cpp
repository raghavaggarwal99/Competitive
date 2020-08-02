int Solution::romanToInt(string A) {
    
    unordered_map<char,int> x;
    x['I']=1;
 
    x['V']=5;
   
    x['X']=10;
    x['L']=50;
    x['C']=100;
    x['D']=500;
    x['M']=1000;
   
    int i=A.length()-1;
    // int 
    int sum=0;
    
    while(i>=0){
        
        
       sum+=x[A[i]];
       
       if(i!=0){
           if(x[A[i-1]]<x[A[i]]){
               sum=sum-x[A[i-1]];
               i--;
           }
       }
       i--;
        
        
    }
    
    return sum;
    
    
    
    
    
    
    
    
    
    
}

