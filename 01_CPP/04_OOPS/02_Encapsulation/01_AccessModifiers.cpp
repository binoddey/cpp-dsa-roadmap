#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    float Salary;
    float Bonus;

public:
    string Name;
    string EmpID;
    int phone;

    //setter
    void SetSalary(double s){
        Salary = s;
    }

    //getter
    double GetSalary(){
        return Salary;
    }

};

int main() {
    Employee e1; //Creates object e1 of class Employee
    e1.Name = "Vijay";
    e1.EmpID = "E12345";
    e1.SetSalary(50000);
    cout << e1.Name << endl;
    cout << e1.EmpID << endl;
    cout << e1.GetSalary() << endl;
    return 0;
}