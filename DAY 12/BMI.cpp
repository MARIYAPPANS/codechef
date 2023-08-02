#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if(a/(b*b)<=18){
	        cout<<"1"<<endl;
	    }
	    else if(a/(b*b)>=19 && a/(b*b)<=24){
	        cout<<"2"<<endl;
	    }
	   else if(a/(b*b)>=25 && a/(b*b)<=29){
	        cout<<"3"<<endl;
	    }
	    else if(a/(b*b)>=30){
	         cout<<"4"<<endl;
	    }
	}
	return 0;
}
