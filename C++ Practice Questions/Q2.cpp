// Calculate max of two numbers.

#include <iostream>
using namespace std;

int main() {

    int n1, n2;
    cout << "Enter first number : ";
    cin >> n1;

    //int n2;
    cout << "Enter second number : ";
    cin >> n2;

    if(n1 > n2) {
        cout << n1;
        cout << " is greater";
    } 
    else {
        cout << n2;
        cout << " is greater";
    }

    return 0;
}