using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	    int n;
	    cin>>n;
	    int a[100001]={0};
	    int y;
	    for(int j=0; j<n; j++){
	        cin>>y;
	        a[y]++;
	        
	   }
	   int k;
	   cin>>k;
	   k--;
	   int p=0;
	   int *b=new int[100001];
	   for(int i=0; i<100001; i++){
	       if(a[i]>0){
	           b[p]=i;
	           p++;
	       }
	   }
	    cout<<b[k]<<endl;
	    
	}
	
	
	return 0;
}
