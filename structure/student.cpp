#include <iostream>
using namespace std;

struct Student {
    int roll;
    float marks;
};

int main() {
    Student s;

    s.roll = 1;
    s.marks = 85.5;

    cout << "Roll = " << s.roll << endl;
    cout << "Marks = " << s.marks;

    return 0;
}
