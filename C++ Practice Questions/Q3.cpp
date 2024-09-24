// Calculate the Factorial of a number N.

#include <iostream>
using namespace std;

int main() {

    int N;
    int fact = 1;
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++){
        fact *= i;
    }
    cout << "Factorial of "<< N <<" is " << fact;

    return 0;
}