#include <bits/stdc++.h> 
using namespace std;   
int main()  {  
    int t,n,i,j,k,space; cin>>t;
    for(k=0; k<t; k++){ cin>>n; space=n-1;    
    for (i = 0; i < n; i++){  
        for (j = 0;j < space; j++)  
            cout << " ";  
        for (j = 0; j <= i; j++) {
            cout << "1";  
            if(j!=i){
                cout<<"0";}}
        cout << endl;  
        space--; }  
       space = 0;  
    for (i = n-1; i > 0; i--) {  
        for (j = 0; j < space+1; j++)  
            cout << " ";  
        for (j = 0;j < i;j++){
            cout << "1"; 
             if(j!=i-1){
                cout<<"0";}} 
        cout << endl; 
        space++;  } }}  
