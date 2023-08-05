#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,count = 0;
        cin>>s;
        for(int i = 0; i < s; i++){
            if(count == 4){
                count = 0;
            }
            count++;
        }
        if(count == 1) cout<<"East"<<endl;
        else if(count == 2) cout<<"South"<<endl;
        else if(count == 3) cout<<"West"<<endl;
        else cout<<"North"<<endl;
    }
    return 0;
}