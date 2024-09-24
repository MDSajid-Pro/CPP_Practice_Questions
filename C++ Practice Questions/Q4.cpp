// Given a person's age, Find if they should get a driving license or not.

#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter your age :";
    cin >> age;

    if(age>=18) {
        cout << "Your are eligible for driving license";
    }
    else {
        cout << "Your are not eligible for driving license";
    }

    return 0;
}