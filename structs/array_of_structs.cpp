#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float grade;
};

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        cin >> students[i].name;
        cin >> students[i].age;
        cin >> students[i].grade;
    }

    for (int i = 0; i < 3; i++) {
        cout << students[i].name << " "
            << students[i].age << " "
            << students[i].grade << endl;
    }

    return 0;
}