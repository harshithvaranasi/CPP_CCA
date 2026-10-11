#include <iostream>
using namespace std;

int main() {
    int a = 20;
    int *p = &a;

    cout << "Value = " << *p << endl;
    cout << "Address = " << p;

    return 0;
}
