#include <iostream>
using namespace std;

int square(int x) {
    return x * x;
}

int sumOfSquares(int a, int b) {
    return square(a) + square(b);
}

int main() {
    cout << sumOfSquares(3, 4) << endl;
    return 0;
}