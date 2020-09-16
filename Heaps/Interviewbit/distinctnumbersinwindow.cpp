#include<bits/stdc++.h>
vector<int> Solution::dNums(vector<int> &A, int B) {
    
    vector<int> ans;
    
    int k=B;
    
   list<int> Q; 
   
   unordered_map<int,int> x;
   int count=0;
   
   for(int i=0; i<k; i++){
       
       if(x[A[i]]==0){
           count++;
       }
       x[A[i]]++;
       Q.push_back(i);
    
   }
   
   
   for(int i=k; i<A.size(); i++){
       
       ans.push_back(count);
       
            int index=Q.front();
            
            x[A[index]]--;
            
            if(x[A[index]]==0){
                count--;
            }
            
           Q.pop_front();
       
        if(x[A[i]]==0){
           count++;
       }
       x[A[i]]++;
       
       Q.push_back(i);


       
   }
   
    ans.push_back(count);
    
    
    
    return ans;
    
}

