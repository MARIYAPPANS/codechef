#include <iostream>
using namespace std;

int main() {
	int t,a[10]={2010,2015,2016,2017,2019};
	cin>>t;
	while(t--){
	    int n,i,c=0;
	    cin>>n;
	    for(i=0;i<=4;i++){
	    if(n==a[i]){
	        c=c+1;
	    }
	    }
	    if(c==1){
	        cout<<"HOSTED"<<endl;
	    }
	    else{
	        cout<<"NOT HOSTED"<<endl;
	    }
	}
	return 0;
}
