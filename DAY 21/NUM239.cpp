#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int i;
	 
	while(t--){
	    int l,r;
	    int c=0;
	    cin>>l>>r;
	for(i=l;i<=r;i++){
	   
	    if(i%10==2){
	        c=c+1;
	        
	    }
	    else if( i%10==3){
	        c=c+1;
	        
	    }
	    else if( i%10==9){
	        c=c+1;
	        
	    }
	    
	    
	}
	cout<<c<<endl;
	}
	return 0;
}
