vector<int> Solution::maxset(vector<int> &A) {
    
    vector<int> ans;
    int index=-1;
    int index2=-1;
    
    int length=0;
    long long int sum=0;
    long long int maxx=0;
    int count=0;
    
    for(int i=0; i<A.size(); i++){
        if(A[i]<0){
            sum=0;
            count=0;
        }
        else{
            sum+=A[i];
            count++;
            if(sum>maxx){
                maxx=sum;
                index=i;
                length=count;
            }
            else if(sum==maxx && count>length){
                 maxx=sum;
                index=i;
                length=count;
            }
        }
        
        
    }

    for(int i=index-length+1; i<=index; i++){
        ans.push_back(A[i]);
    }
    
    return ans;
    
    
    
}

