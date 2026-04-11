#include <iostream>
using namespace std;

int main() {
    int n = 12345;

    while (n > 0) {
        int digit = n % 10;
        cout << digit << " ";
        n /= 10;
    }

    return 0;
}