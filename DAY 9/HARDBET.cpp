#include <iostream>
using namespace std;

int main() {
    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        if(a<=b && a<=c){
            cout<<"Draw"<<endl;
        }
        else if(b<=c && b<=a){
            cout<<"Bob"<<endl;
            
        }
        else{
            cout<<"Alice"<<endl;
        }
    }

	return 0;
}
