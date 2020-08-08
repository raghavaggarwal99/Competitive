void dfs(int A, int B, vector<int> &ans, int num){
    
    if( num>B){
        return ;
    }
    
    if(num==0 && num>=A && num<=B){
        ans.push_back(0);
        return ;
    }
    else if(num==0){
        return;
    }
    
    if(num>=A && num<=B){
        ans.push_back(num);
    }
    
    
    int lastdigit= num%10;
    
    int step1= num*10+lastdigit-1;
    int step2= num*10+lastdigit+1;
    
    
    if(lastdigit==0){
        dfs(A,B,ans,step2);
    }
    else if(lastdigit==9){
        dfs(A,B,ans,step1);
    }
    else{
        
        dfs(A,B,ans,step1);
        dfs(A,B,ans,step2);
    }
    
    
    
    
    
}


vector<int> Solution::stepnum(int A, int B) {
    
    
    vector<int> ans;
    
    
    for(int i=0; i<=9; i++){
        dfs(A, B, ans, i);
    }
    
    sort(ans.begin(), ans.end());
    
    return ans;
    
    
    
    
}

