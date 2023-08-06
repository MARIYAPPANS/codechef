#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int x,y,m,n;
	    cin>>x>>y;
	    m=(x*x*x*x)+4*(y*y);
	    n=4*(x*x)*y;
	    if(m==n){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
