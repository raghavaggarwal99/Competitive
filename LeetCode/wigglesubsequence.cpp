class Solution {
public:
    int wiggleMaxLength(vector<int>& a) {
        
        
        int positive =0;
        int negative=0;
        
        int check=-1;
        
        
         if(a.size()==0){
            return 0;
        }
        
        if(a.size()==1){
            return 1;
        }
        int index=-1;
        
        for(int i=1; i<a.size(); i++){
            
            int v=a[i]-a[i-1];
            
            
            if(v>0){
                positive++;
                check=1;
                index=i;
                break;
            }
            else if(v<0){
                negative++;
                check=0;
                index=i;
                break;
            }
            
            
            
        }
        
        cout<<index<<endl;
        
//         if(index==-1 || check==-1){
//             return 0;
//         }
        
        int copy=check;
        
        if(index==a.size()-1){
            return max(negative,positive)+1;
        }
        
        if(index==-1 || check==-1){
            return 1;
        }
        
        for(int i=index+1; i<a.size(); i++){
            
            int v=a[i]-a[i-1];
            
            
            if(v>0 && check==0){
                positive++;
                check=1;
            }
            else if(v<0 && check==1){
                positive++;
                check=0;
            }
            
            
        }
        
        check=copy;
        
        cout<<positive<<endl;
        
        
         for(int i=index+1; i<a.size(); i++){
            
            int v=a[i]-a[i-1];
            
            
            if(v>0 && check==0){
                negative++;
                check=1;
            }
            else if(v<0 && check==1){
                negative++;
                check=0;
            }
            
            
        }
          cout<<negative<<endl;
        
        
        return max(negative,positive)+1;
        
        
        
    }
};
