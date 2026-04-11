#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float grade;
};

int main() {
    Student s1;

    s1.name = "Ivan";
    s1.age = 20;
    s1.grade = 5.50;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.grade << endl;

    return 0;
}