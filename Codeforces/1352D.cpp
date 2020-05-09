#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    
    long long int t,n;
    cin>>t;
    
    // int *a=new int[n];
    
    for(int k=0; k<t; k++){
        cin>>n;
        
       int *a=new int[n];
      
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        unordered_map<int,int> map;
        
        int start=0;
        int end=n-1;
        long long int sumleft=0;
        long long int sumright=0;
        long long int countmove=0;
        int leftindex=0;
        int rightindex=n-1;
        int check1=0;
        int check2=0;
        int left=0;
        int right=0;
        
        // int left=a[0];
        while(1){
            
          if(check1==1 || check2==1){
                break;
            }
            
            while(leftindex<=n-1){
                // cout<<leftindex<<endl;
                if(map[leftindex]==1){
                    check1=1;
                    break;
                }
                map[leftindex]=1;
                left+=a[leftindex];
                leftindex+=1;
                // cout<<leftindex<<endl;
                if(left>right){
                    sumleft+=left;
                    countmove+=1;
                    start=leftindex;
                    // cout<<sumleft<<endl;
                    break;
                }
                
            }
            // cout<<countmove<<endl;
            if(check1==1 && left!=0){
               sumleft+=left; 
                countmove+=1;
                break;
            }
            right=0;
            
            // cout<<sumleft<<endl;
            while(rightindex>=0){
                // cout<<rightindex<<endl;
                if(map[rightindex]==1){
                    check2=1;
                    break;
                }
                map[rightindex]=1;
                right+=a[rightindex];
                rightindex--;
                if(right>left){
                    sumright+=right;
                    countmove+=1;
                    end=rightindex;
                    // cout<<sumright<<endl;
                    break;
                }
            }
            left=0;
            if(check2==1 && right!=0){
               sumright+=right; 
                countmove+=1;
                break;
            }
            
            if(check1==1 || check2==1){
                break;
            }
            
        }
        
        cout<<countmove<<" "<<sumleft<<" "<<sumright<<endl;
        
        
        
        
    }
    
   
    
    
    
}
