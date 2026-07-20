#include <iostream>
using namespace std;

int factorial(int n){
    //Base Case - factorial(0) = 1 and factorial(1) = 1
    if(n == 0 || n == 1){
        return 1;
    }
    //Recursive Case - n! = n * (n-1)!
    else{
        return n * factorial(n-1);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}