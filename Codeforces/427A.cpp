#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int main() {
    
 
    int n, has= 0, occ= 0, tmp;
    cin>>n;
    while(n--){
        cin>>tmp;
        
        if(tmp > 0) has+= tmp;
        else if(has > 0){
            has--;
        }
        else occ++;
    }
    
    cout<< occ<<endl;
 
}
