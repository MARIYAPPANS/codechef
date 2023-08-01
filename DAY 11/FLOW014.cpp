#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin >> t;
	while(t--){
	    float hardness, ccontent, tstrength;
	    cin >> hardness >> ccontent >> tstrength;
	    if (hardness > 50 && ccontent < 0.7 && tstrength >5600){
	        cout << 10 << endl;
	    }
	    else if(hardness > 50 && ccontent < 0.7 ){
	        cout << 9 << endl;
	    }
	    else if (ccontent < 0.7 && tstrength > 5600){
	        cout << 8 << endl;
	    }
	    else if ( hardness > 50 && tstrength > 5600) {
	        cout << 7 << endl;
	    }
	    else if ( hardness > 50 || ccontent < 0.7 || tstrength > 5600){
	        cout << 6 << endl;
	    }
	    else {
	        cout << 5 << endl;
	    }
	}
}
