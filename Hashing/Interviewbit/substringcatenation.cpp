vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    
   
    int noOfWords = B.size();
    
    vector<int> ans;
    
    if (A.size() == 0 || B.size() == 0){
        return ans;
    }
    
    int wordSize = B[0].size();
    
    unordered_map<string, int> hash;
    
   for(int i=0; i<B.size(); i++){
       hash[B[i]]++;
   }
    
    int i = 0;
    while ((i + wordSize*noOfWords - 1) < A.size()) {
        
        unordered_map<string, int> tempHash;
        
        int  j = 0;
        while (j < A.size()) {
            string word = A.substr(i + j*wordSize, wordSize);
            // cout<<word<<endl;
            if (hash.find(word) == hash.end()) {
                break;
            } 
            else {
                
                if (++tempHash[word] > hash[word]){
                    break;
                }
                ++j;
            }
            
            if (j == noOfWords)
                ans.push_back(i);
        }
        ++i;
    }
    
    return ans;
    
    
    
}

