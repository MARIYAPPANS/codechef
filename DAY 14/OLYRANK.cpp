#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y,n2,x2,y2;
	    cin>>n>>x>>y>>n2>>x2>>y2;
	    if((n+x+y)>(x2+n2+y2)){
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        cout<<"2"<<endl;
	    }
	}
	
	return 0;
}
