#include <iostream>
using namespace std;

union Student {
    int roll;
    float marks;
};

int main() {
    Student s;

    s.roll = 101;
    cout << "Roll Number = " << s.roll << endl;

    s.marks = 85.5;
    cout << "Marks = " << s.marks;

    return 0;
}
