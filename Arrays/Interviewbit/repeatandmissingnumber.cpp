vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    vector<int> ans;
    
    
    long long int sum=0;
    
    long long int square=0;

    
    long long int n=A.size();
    
    
    square=((n)*(n+1)*(2*n+1))/6;
    sum=(n*(n+1))/2;
    
    long long int actualsum=0;
    long long int actualsquare=0;
    
    for(int i=0; i<A.size(); i++){
        actualsum+=A[i];
    }
    for(int i=0; i<A.size(); i++){
        actualsquare=actualsquare+ (long long int)A[i]*A[i];
    }
    
    sum=sum-actualsum;
    square=square-actualsquare;
    
    int x=0;
    int y=0;
    square=square/sum;
    x=(sum+square)/2;
    
    y=(square-sum)/2;
    
    ans.push_back(y);
    ans.push_back(x);
    
    
    return ans;
    
}

