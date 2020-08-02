#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main() {
     int n, mn= 0;
    string s;
    
    char cr= 'a';
    int a,b,c;
    
    cin>>s;
        
    for(int i= 0; s[i]; i++){
        a= abs(s[i]-cr);
        b= abs(s[i]- (26+cr));
        c= abs(s[i]+26-cr);
 
        cr = s[i];
        
        mn+= min(c,min(a,b));
    }
        
    cout<< mn <<endl;
}
