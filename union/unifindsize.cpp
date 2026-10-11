#include <iostream>
using namespace std;

union Data {
    int a;
    float b;
    char ch;
};

int main() {
    cout << "Size = " << sizeof(Data);

    return 0;
}
