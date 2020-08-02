vector<int> Solution::solve(int A, int B, int C, int D) {
    
   
    
    vector<int> ans;
    // vector<int> set;
    set<int> st;
    st.insert(A);
    st.insert(B);
    st.insert(C);
    
    
    
     if(D==0){
        return ans;
    }
    
    
    int i=0;
    while(!st.empty()){
        
       int curr = *st.begin();
       
        st.erase(st.begin());
        
        ans.push_back(curr);
        
        if(ans.size()==D)
            break;
            
        int p1 = curr*A;
        int p2 = curr*B;
        int p3 = curr*C;
        st.insert(p1);
        st.insert(p2);
        st.insert(p3);
        
    }
    
    
    return ans;
    
    
    
    
}

