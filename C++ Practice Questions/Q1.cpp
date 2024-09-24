// Calculate "Simple Intrest" form Principal (P), Rate (R) & Time (T)

#include <iostream>
using namespace std;

int main() {
    int p ,r ,t;

    cout << "Principal = ";
    cin >> p;
    cout << "Rate = ";
    cin >> r;
    cout << "Time = ";
    cin >> t;

    int si = (p * r * t) / 100;
    cout << "Simple Intrest is " << si << endl;

    return 0;

}