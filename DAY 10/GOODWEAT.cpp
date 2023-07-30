#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int i,a[10];
	    for(i=0;i<7;i++){
	        cin>>a[i];
	    }
	    int c=0,k=0;
	    for(i=0;i<7;i++){
	        if(a[i]==0){
	            c=c+1;
	        }
	        else{
	            k=k+1;
	        }
	    }
	    if(k>c){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
