#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         int bs;
         cin>>bs;
         double gs;
         if(bs<1500){
             gs= bs+(0.1*bs)+(0.9*bs);
             cout<<fixed<<setprecision(2)<<gs<<endl;
         }
         else if(bs>=1500){
             gs=bs+500+(0.98*bs);
             cout<<fixed<<setprecision(2)<<gs<<endl;
         }
     }
     return 0;
}
