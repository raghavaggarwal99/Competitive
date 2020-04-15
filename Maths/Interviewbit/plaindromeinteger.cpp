int Solution::isPalindrome(int A) {
    
    ostringstream str1; 
  
    // Sending a number as a stream into output 
    // string 
    str1 << A; 
  
    // the str() coverts number into string 
    string c = str1.str(); 
    
    int n=c.length();
   for(int i=0;i < c.length() ;i++){
        if(c[i] != c[n-i-1]){
            return 0;
        }
   }
   
   return 1;
    
    
    
}

