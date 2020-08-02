#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
 
int num[25];
char s[1100];
int main(){
    int n,len,sum,i;
    while(gets(s)){
        sum=0;
        memset(num,0,sizeof(num));
        len=strlen(s);
        for(i=0;i<len;i++){
            if(s[i]>='a'&&s[i]<='z'){
                num[s[i]-'a']=1;
            }
        }
        for(i=0;i<=25;i++){
            if(num[i]==1){
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
