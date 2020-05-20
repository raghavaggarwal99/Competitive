#include <bits/stdc++.h>
using namespace std;

int main() {
	int tests;
	cin >> tests;
	while(tests--)
	{
	    int k,size,ele;
	    cin >> k >> size;
	    priority_queue <int , vector <int> , greater <int> > pq;
	    for(int i = 0 ; i < size ; i++)
	    {   
	        cin >> ele;   
	        if(i < k)
	        {
	            pq.push(ele);
	            if(i == k-1)
	                cout << pq.top() << " ";
	            else     
	                cout << "-1" << " ";
	        }
	        else
	        {
	            if(ele >= pq.top())
	            {
	                pq.pop();
	                pq.push(ele);
	                
	            }
	            cout << pq.top() <<  " ";
	            
	        }
	    }
	    cout << endl;
	}
	return 0;
}
