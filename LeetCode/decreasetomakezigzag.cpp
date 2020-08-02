class Solution {
public:
    int movesToMakeZigzag(vector<int>& a) {
        
        
        vector<int> copy=a;
        int n=a.size();
        
        int count=0;
        
        
        for(int i=1; i<a.size()-1; i++){
            
            if(i%2!=0){
                if(a[i]>=a[i-1] || a[i]>=a[i+1]){
                    int v=min(a[i-1],a[i+1]);
                    count+=a[i]-v+1;
                    a[i]=v-1;
                }
            }
            
        }
        
        if(n%2==0){
            if(a[n-1]>a[n-2]){
                 count+=a[n-1]-a[n-2]+1;
                a[n-1]=a[n-2]-1;
            }
        }
        
        
         for(int i=0; i<a.size(); i++){
            
          cout<<a[i]<<" ";
            
            
        }
        cout<<endl;
        // cout<<count<<endl;
        
        int count2=0;
        
        if(copy[0]>copy[1]){
            count2+=copy[0]-copy[1]+1;
            copy[0]=copy[1]-1;
        }
        
         for(int i=1; i<a.size()-1; i++){
            
            if(i%2==0){
                if(copy[i]>=copy[i+1] || copy[i]>=copy[i-1]){
                     int v=min(copy[i-1],copy[i+1]);
                        count2+=copy[i]-v+1;
                        copy[i]=v-1;
                }
            }
            
            
        }
        
        
         if(n%2!=0){
            if(copy[n-1]>copy[n-2]){
                 count2+=copy[n-1]-copy[n-2]+1;
                copy[n-1]=copy[n-2]-1;
            }
        }
        
         for(int i=0; i<a.size(); i++){
            
          cout<<copy[i]<<" ";
            
            
        }
          cout<<endl;
        
        return min(count,count2);
        
        
        
        
        
        
        
        
        
    }
};
