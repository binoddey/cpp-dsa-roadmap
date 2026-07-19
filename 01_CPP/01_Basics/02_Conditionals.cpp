#include <iostream>
using namespace std;

int main() {
    int x; //variable creation
    cout << "Enter a number: ";
    cin >> x; // This line takes input from the user and stores it in the variable x.

    if (x > 0) {
        cout << "The number is positive." << endl;
    } else if (x < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}