void countDistinct(int a[], int k, int n) {
    // Your code here
    int count=0;
    
    unordered_map<int,int> x;
    
    for(int i=0; i<k; i++){
        if(x[a[i]]==0){
            count++;
            x[a[i]]++;
        }
        else{
            x[a[i]]++;
        }
    }
    
    cout<<count<<" ";
    
    int start=0;
    
    for(int i=k; i<n; i++){
        
        // cout<<"start "<<start<<endl;
       int v=a[start];
       x[v]--;
       
      if(x[v]==0){
          count-=1;
      }
      
      if(x[a[i]]==0){
          count++;
          
      }
     
          x[a[i]]++;
      
      
      cout<<count<<" ";
      start++;
       
    }
    
    
    
    
    
}
