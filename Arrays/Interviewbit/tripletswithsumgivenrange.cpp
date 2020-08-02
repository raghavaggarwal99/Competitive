int Solution::solve(vector<string> &A) {
    
    
   int n = A.size();
   
    vector<double> v;
    
    for (int i = 0; i < n; i++) {
        v.push_back(stof(A[i]));
    }
    
    double a = v[0], b = v[1], c = v[2];

    for (int i = 3; i < n; i++) {
       
       if(a+b+c>1 && a+b+c<2){
           return 1;
       }
       else if(a+b+c>2){
           if(a>b && a>c){
               a=v[i];
           }
           else if(b>a && b>c){
               b=v[i];
           }
           else{
               c=v[i];
           }
       }
       else{
            if(a<b && a<c){
               a=v[i];
           }
           else if(b<a && b<c){
               b=v[i];
           }
           else{
               c=v[i];
           }
       }
    }
    
    if(a+b+c>1 && a+b+c<2){
           return 1;
      }
      
      return 0;
    
    
    
}

