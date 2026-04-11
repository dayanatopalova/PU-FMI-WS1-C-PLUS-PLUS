#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {
        {9, 2, 7},
        {4, 1, 6},
        {8, 3, 5}
    };

    int minVal = a[0][0];
    int maxVal = a[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] < minVal) minVal = a[i][j];
            if (a[i][j] > maxVal) maxVal = a[i][j];
        }
    }

    cout << "Min: " << minVal << endl;
    cout << "Max: " << maxVal << endl;

    return 0;
}