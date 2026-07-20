#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

float CircleArea(){
    float radius;
    cout << "Enter Radius of the Circle: ";
    cin >> radius;
    return 3.14 * radius * radius;
}

void printHello(){
    cout << "Hello World" << endl;
}

int main() {
    printHello();
    cout << sum(5, 10) << endl;
    cout << CircleArea() << endl;
    return 0;
}