vector<int> Solution::maxone(vector<int> &A, int B) {
    
    
    int i=0,count,check,ind,m=-1;

    while(i<A.size())
    {
        if(A[i-1]!=1)
       { 
           count=0;check=0;
           
          for(int j=i;j<A.size();j++)
          {
            if(A[j]==0)
            check++;
            if(check>B)
            break;
            count++;
          }
            if(count>m)
             {
              ind=i;
              m=count;
                 
             }
        }
        i++;
    }
    
    vector<int> v;
    for(int k=ind;k<ind+m;k++)
        v.push_back(k);
    
    return v;
        
    
    
    
    
    
    
    
    
    
}

