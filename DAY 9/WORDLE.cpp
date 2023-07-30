#include <iostream>
using namespace std;

int main() {
     int t,i;
     cin>>t;
      char a[100],b[100],c[100];
      while(t--){
        for(i=0;i<5;i++){
            cin>>a[i];
        }  
        for(i=0;i<5;i++){
            cin>>b[i];
        }  
        
        for(i=0;i<5;i++){
            if(a[i]==b[i]){
                c[i]='G';
            }
            else{
                c[i]='B';
            }
        }  
        for(i=0;i<5;i++){
            cout<<c[i];
        }  
        cout<<"\n";
        
        
      }
	return 0;
}
