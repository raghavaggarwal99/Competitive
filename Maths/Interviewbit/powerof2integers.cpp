int Solution::isPower(int n) {
  if(n==1||n==0) return 1;
    int p=2;
    float x=pow(n,1.0/p);
    while((int)x>1){
        //cout<<x<<endl;
        if(x-(int)x==0)
         return 1;
        p++;
        x=pow(n,1.0/p);
    }
    return 0;
    
    
}

