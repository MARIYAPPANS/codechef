#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double q, p;
        cin >> q >> p;
        double tt = q * p;
        if (q > 1000) {
            double c = tt - (tt * 0.1);
            cout << fixed << setprecision(6) << c << endl;
        } else {
            cout << fixed << setprecision(6) << tt << endl;
        }
    }

    return 0;
}
