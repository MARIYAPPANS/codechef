#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a[100],b[100],n,c=0,i,v,s;
	    cin>>n;
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	     for(i=0;i<n;i++){
	        cin>>b[i];
	    }
	    
	     for(i=0;i<n;i++){
	         v=2*a[i];
	         s=2*b[i];
	         if(v>=b[i] && s>=a[i]){
	             c=c+1;
	         }
	         
	    }
	   cout<<c<<endl;
	}
	
	return 0;
}
