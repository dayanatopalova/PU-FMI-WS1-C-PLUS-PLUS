#include <iostream>
using namespace std;

void changeValue(int x) {
    x = 100;
}

void changeReference(int& x) {
    x = 100;
}

int main() {
    int a = 10;

    changeValue(a);
    cout << "After pass by value: " << a << endl;

    changeReference(a);
    cout << "After pass by reference: " << a << endl;

    return 0;
}