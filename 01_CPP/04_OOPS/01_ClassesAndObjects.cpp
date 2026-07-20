#include <iostream>
using namespace std;

class Circle {
    //properties or attributes
    float radius;
    float Area;

    //methods
    float CircleArea(float radius) {
        Area = 3.14 * radius * radius;
        return Area;
    }
};

int main() {
    Circle c1; //Creates object c1 of class Circle
    return 0;
}