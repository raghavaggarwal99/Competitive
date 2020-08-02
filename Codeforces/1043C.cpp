#include <bits/stdc++.h>
using namespace std;
int main()
{
  string str;
  bool pre[1005];
  memset(pre,false,sizeof(pre));
  cin>>str;
  int len = str.length();
  for(int i=1;i<len-1;i++){
    if(str[i] != str[i+1])pre[i] = true;
  }
  if(str[len-1] == 'a')pre[len-1] = true;
  for(int i=0;i<len;i++){
    if(pre[i])printf("1 ");
    else printf("0 ");
  }
  puts("");
  return 0;
}
