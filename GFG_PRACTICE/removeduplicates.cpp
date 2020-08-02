#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int t;
    string s;
    cin>>t;
    cin>>ws;
    while(t--){
        getline(cin,s);
        //cout<<s;
        
        unordered_map<char, int> map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
        }
        //auto it = map.begin();
        for(int i=0;i<s.size();i++)
            if(map[s[i]]!=0){cout<<s[i]; map[s[i]]=0;}
        cout<<endl;
        }
	//code
	return 0;
}
