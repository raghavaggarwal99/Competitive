int Solution::fibsum(int A) {
    
    vector<int> ans;
    
    ans.push_back(1);
    ans.push_back(1);
    int i=2;
    
    
    while(1){
      
        int val=ans[i-1]+ans[i-2];
        
        if(val>A){
            break;
        }
        ans.push_back(val);
        i++;
    }
    
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;
    
    int n=ans.size()-1;
    int count=0;
    
    while(n>=0){
        
        int check=0;
        
        while(1){
            if(A<ans[n]){
                break;
            }
            A-=ans[n];
            check=1;
        }
        n--;
        if(check==1){
            count++;
        }
        
        if(A==0){
            break;
        }
  
    }
    
    return count;
    
    
}

