#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a[10],i;
	    for(i=0;i<5;i++){
	        cin>>a[i];
	    }
	    int sum=0;
	    for(i=0;i<5;i++){
	       sum=sum+a[i];
	    }
	    if(sum==0){
	        cout<<"Beginner"<<endl;
	    }
	    else if(sum==1){
	        cout<<"Junior Developer"<<endl;
	    }
	    else if(sum==2){
	        cout<<"Middle Developer"<<endl;
	    }
	    else if(sum==3){
	        cout<<"Senior Developer"<<endl;
	    }
	    else if(sum==4){
	        cout<<"Hacker"<<endl;
	    }
	    else if(sum==5){
	        cout<<"Jeff Dean"<<endl;
	    }
	}
	return 0;
}
