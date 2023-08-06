#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a[10], b[10], c[10];
        for (int i = 0; i < 10; i++) {
            cin >> a[i];
        }
        
        int j = 0; // Index for array 'b'
        for (int i = 0; i < 10; i++) {
            if (i % 2 != 0) { // Store odd-indexed elements in 'b'
                b[j] = a[i];
                j++; // Increment 'j' to store the next odd-indexed element in 'b'
            }
        }

        int k = 0; // Index for array 'c'
        for (int i = 0; i < 10; i++) {
            if (i % 2 == 0) { // Store even-indexed elements in 'c'
                c[k] = a[i];
                k++; // Increment 'k' to store the next even-indexed element in 'c'
            }
        }
        int sum=0,sum1=0;
        for (int i = 0; i < j; i++) {
            sum=sum+b[i];
        }
        for (int i = 0; i < k; i++) {
            sum1=sum1+c[i];
        }
        if(sum>sum1){
            cout<<"2"<<endl;
        }
        else if (sum1>sum){
             cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
        
        
    }
    return 0;
}
