bool check(int a, int b){
    
    string v=to_string(a);
    string s=to_string(b);
    
    string aa=s+v;
    string bb=v+s;
    
    if(aa>bb){
        return false;
    }
    return true;
    
    
}

string Solution::largestNumber(const vector<int> &A) {
    
    string ans="";
    
   vector<int> copy=A;
   
   sort(copy.begin(), copy.end(), check);
   
   for(int i=0; i<copy.size(); i++){
       ans+=to_string(copy[i]);
   }
   if(copy[0]==0){
       return "0";
   }
   
   
   return ans;
    
    
    
    
    
}

