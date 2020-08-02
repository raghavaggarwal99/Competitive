#include<iostream>
using namespace std;
 
int main ()
 
{
 
    string str;
    cin>>str;
 
int count1=0;
int count2=0;
 
    for(int i=0; i<str.length(); i++){
 
        if(str[i]=='4'){
            count1++;
        }
        else if(str[i]=='7'){
            count2++;
        }
    }
 
    if(count1==0 && count2==0){
        cout<<"-1"<<endl;
        
    }
    else if(count1>=count2){
        cout<<"4"<<endl;
    }
    else{
        cout<<"7"<<endl;
    }
 
 
 
}
