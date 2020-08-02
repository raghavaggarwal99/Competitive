vector<int> Solution::plusOne(vector<int> &A) {
    
    int carry=0;
    for(int i=A.size()-1; i>=0; i--){
        
        if(A[i]==9){
            A[i]=0;
            carry=1;
        }
        else if(A[i]<=8){
            A[i]+=1;
            carry=0;
            break;
        }
        
    }
    
    vector<int> ans;
    if(carry==1){
        ans.push_back(1);
    }
    int check=0;
    int i=0;
    while(i<A.size()){
        
        while(A[i]==0 && check==0 && ans.size()==0){
            i++;
        }
        check=1;
        ans.push_back(A[i]);
        i++;
    }
    
    return ans;
    
    
    
}

