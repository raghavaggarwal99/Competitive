bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    
    
   vector<pair<int,int>> v;
   int n=arrive.size();
   
   for(int i=0; i<arrive.size(); i++){
       v.push_back(make_pair(arrive[i],1));
       v.push_back(make_pair(depart[i],-1));
   }
   
   int count=0;
   sort(v.begin(), v.end());
   
   for(int i=0; i<2*n; i++){
       count+=v[i].second;
       if(count>K){
           return false;
       }
   }
   
   return true;
    
    
    
    
}

