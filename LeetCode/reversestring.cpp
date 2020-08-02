class Solution {
public:
    void reverseString(vector<char>& s) {
        
         reverse(s.begin(), s.end());
        
        cout<<"[";
        for(int i=0; i<s.size(); i++){
            cout<<'"';
            cout<<s[i];
            cout<<'"'<<',';
        }
        
        cout<<"]";
        
    }
};
