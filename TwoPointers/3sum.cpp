int Solution::threeSumClosest(vector<int> &A, int B) {
    
    
    sort(A.begin(), A.end());
    
    if(A.size()<3){
        return 0;
    }
    int a=0;
  int i=0;
  
    int ans=INT_MAX;
    int sum;
    
   while(i<A.size()-2){
       
       int left=i+1;
       int right=A.size()-1;
       
       while(right>left){
           int temp=A[i]+A[left]+A[right];
           
           int diff=abs(B-temp);
           
           if(diff==0){
              return temp;
           }
           if(diff<ans){
               ans=diff;
               sum=temp;
           }
           
           if(temp>B){
               right--;
           }
           else{
               left++;
           }
           
       }
       i++;
       
       
   }
   
   return sum;
    
    
    
    
    
    
    
    
}

