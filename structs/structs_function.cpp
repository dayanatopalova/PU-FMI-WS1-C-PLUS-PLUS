#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

void printPoint(Point p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    Point p1;

    p1.x = 10;
    p1.y = 20;

    printPoint(p1);

    return 0;
}