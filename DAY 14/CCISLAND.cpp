#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float x,y,x1,y1,d;
        cin>>x>>y>>x1>>y1>>d;
       double k=x/x1;
        double m=y/y1;
        double min1;
        if(k<m){
            min1=k;
        }
        else{
             min1=m;
        }
        if(min1>=d){
            cout<<"YES"<<endl;
        }
        else if(min1<d){
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
