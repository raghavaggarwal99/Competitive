vector<int> Solution::solve(vector<int> &A, int B) {
    
    vector<int> copy=A;
    
    sort(copy.begin(), copy.end(), greater<int>() );
    
    
    
    unordered_map<int,int> x;
    
    int n=A.size();
    
    
    for(int i=0; i<n; i++){
        x[A[i]]=i;
    }
    
    int k=n-1;
    int start=0;
    int swap=0;
    
       while(1){
           
           if(start>=n){
               break;
           }
           
           if(swap==B){
               break;
           }
           
           if(copy[start]==A[start]){
               start++;
               k--;
               continue;
           }
           else{
               
               int large= copy[start];
               int actual=A[start];
               
            //   cout<<large<<endl;
            //   cout<<actual<<endl;
               
               int indexofsmall=x[A[start]];
               int indexoflarge=x[large];
               
               A[start]=large;
               A[indexoflarge]=actual;
               
               x[actual]=indexoflarge;
               x[large]=indexofsmall;
              
               
               swap++;
               
               k--;
               start++;
               
               
           }
           
           
       }
    
    
    
    // for(int i=0; i<n; i++){
    //     cout<<A[i]<<" ";
    // }
    
    // cout<<endl;
    
    return A;
    
    
    
}

