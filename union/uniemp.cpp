#include <iostream>
using namespace std;

union Employee
{
    int id;
    float salary;
};

int main()
{
    Employee e;

    e.id = 101;
    cout << "Employee ID: " << e.id << endl;

    e.salary = 25000.5;
    cout << "Salary: " << e.salary << endl;

    return 0;
}
