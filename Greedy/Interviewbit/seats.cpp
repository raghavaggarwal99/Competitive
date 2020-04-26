int Solution::seats(string A) {

    vector<int> v;
    
    for(int i=0; i<A.size(); i++){
        
        if(A[i]=='x'){
            v.push_back(i);
        }
        
    }
    
    int mid=v.size()/2;
    int MOD= 10000003;
    long long int ans=0;
    int k=1;
    
    for(int j=mid-1; j>=0; j--){
        ans=(ans+v[mid]-v[j]-k)%MOD;
        k++;
    }
    
    k=1;
    for(int j=mid+1; j<v.size(); j++){
        ans=(ans+v[j]-v[mid]-k)%MOD;
        k++;
    }
    
    
    
    return ans;
    
    
}

