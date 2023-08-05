
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int h,x,y,c;
	    cin>>h>>x>>y>>c;
	    float q=x+(y/2);
	    
	    if((q*h)<=c)
	    {
	       
	        cout<<"YES"<<endl;
	    }
	    else{
	        
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
