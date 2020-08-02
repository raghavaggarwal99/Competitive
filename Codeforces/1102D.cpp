#include <bits/stdc++.h>
using namespace std;
int main()
{
	int len;
	string str;
	scanf("%d",&len);
	cin>>str;
	int k = len / 3;
	map<char,int> ma;
	for(int i=0;i<len;i++){
		ma[str[i]] ++;
	}
	if(ma['0'] < k){
		for(int i=0;i<len;i++){
      if(str[i] == '1' && ma['1'] > k){
        str[i] = '0';
        ma['0']++;
        ma['1']--;
      }
      else if(str[i] == '2' && ma['2'] > k){
        str[i] = '0';
        ma['0'] ++;
        ma['2'] --;
      }
      if(ma['0'] == k)break;
    }
	}
  if(ma['0'] > k){
    for(int i=len-1;i>=0;i--){
      if(str[i] == '0' && ma['2'] < k){
        str[i] = '2';
        ma['2']++;
        ma['0']--;
      }
      else if(str[i] == '0'){
        str[i] = '1';
        ma['1'] ++;
        ma['0'] --;
      }
      if(ma['0'] == k) break;
    }
  }
  if(ma['1'] > k){
    for(int i=len-1;i>=0;i--){
      if(str[i] == '1'){
        str[i] = '2';
        ma['2'] ++;
        ma['1'] --;
      }
      if(ma['1'] == k)break;
    }
  }
  if(ma['2'] > k){
    for(int i=0;i<len;i++){
      if(str[i] == '2'){
        str[i] = '1';
        ma['1'] ++;
        ma['2'] --;
      }
      if(ma['2'] == k) break;
    }
  }
	cout<<str<<endl;
	return 0;
}
