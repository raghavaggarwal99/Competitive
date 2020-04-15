#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
 
int main() {
    string s;
    cin >> s;
    int y=0;
 
    unordered_map<char,int> x;
 
    sort(s.begin(), s.end());
    for(int i=0; i<s.length(); i++){
        if(x[s[i]]==0){
            x[s[i]]=1;
            y++;
        }
    }
    if (y % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
