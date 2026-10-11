#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    *p = 50;

    cout << "Value = " << a;

    return 0;
}
