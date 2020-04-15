vector<int> Solution::lszero(vector<int> &A) {
    
    unordered_map<int,int> x;
    vector<int> copy=A;
    A.insert(A.begin(), 0);
   
    for(int i=1; i<A.size(); i++){
        A[i]=A[i]+A[i-1];
    }
    int maxx=0;
    int index1=0;
    int index2=0;
    // for(int i=0; i<A.size(); i++){
    //   cout<<A[i]<<" ";
    // }
    // cout<<endl;
    
    for(int i=0; i<A.size(); i++){
        
        if(x[A[i]]==0){
            x[A[i]]=i+1;
        }
        else{
            int v=x[A[i]];
            if(i-v+1>maxx){
                maxx=i-v+1;
                index1=v;
                index2=i;
            }
        }
    }
    
   vector<int> ans;
   
   if(maxx==0){
       return ans;
   }
   
   for(int i=index1-1; i<=index2-1; i++){
        ans.push_back(copy[i]);
   }
   

   
   return ans;
   
    
}

