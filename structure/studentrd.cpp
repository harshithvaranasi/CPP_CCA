#include <iostream>
using namespace std;

struct Student {
    int roll;
    char name[20];
};

int main() {
    Student s;

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Roll = " << s.roll << endl;
    cout << "Name = " << s.name;

    return 0;
}
