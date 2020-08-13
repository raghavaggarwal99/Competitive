int Solution::solve(vector<vector<int> > &A) {
    
    vector<pair<int,int>> v;
   int n=A.size();
   
   for(int i=0; i<A.size(); i++){
       
       v.push_back(make_pair(A[i][0],1));
       v.push_back(make_pair(A[i][1],-1));
       
   }
   
   int count=0;
   int ans=0;
   
   sort(v.begin(), v.end());
   
   for(int i=0; i<2*n; i++){
       count+=v[i].second;
       if(count>ans){
           ans=count;
       }
   }
   
   return ans;
    
    
    
    
    
    
    
    
}

