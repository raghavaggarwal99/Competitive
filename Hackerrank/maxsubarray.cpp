#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;

    for(int w=0; w<t; w++){
        int n;
        cin>>n;

        int *a=new int[n+1];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int maxsubaray=0;
        int maxelement=INT_MIN;

        int maxsubrraysum=INT_MIN;

        int sum=0;

        for(int i=0; i<n; i++){

            if(a[i]>0){
                sum+=a[i];
            }

            maxelement= max(maxelement, a[i]);

            maxsubaray+=a[i];

            if(maxsubaray<0){
                maxsubaray=0;
            }

            if(maxsubaray>maxsubrraysum){
                maxsubrraysum= maxsubaray;
            }
            
        }

        if(maxelement<=0){
            cout<<maxelement<<" "<<maxelement<<endl;
        }
        else{
            cout<<maxsubrraysum<<" "<<sum<<endl;
        }




    }


}



