#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a[10000];
	cin>>t;
	while(t--){
	    int n,m,i,c=0;
	    cin>>n>>m;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(i=0;i<n;i++){
	       if(a[i]>m){
	          
	           c=c+1;
	       }
	    }
	    cout<<c<<endl;
	    

	}
	return 0;
}
