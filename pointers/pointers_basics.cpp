#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p: " << p << endl;
    cout << "Value via pointer: " << *p << endl;

    return 0;
}